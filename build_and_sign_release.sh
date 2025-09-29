#!/usr/bin/env bash
set -euo pipefail
# build_and_sign_release.sh
# Usage: ./build_and_sign_release.sh <version-tag>
# Example: ./build_and_sign_release.sh v0.0.1

VERSION="${1:-}"
if [ -z "$VERSION" ]; then
  echo "Usage: $0 <version-tag>   e.g. $0 v0.0.1"
  exit 1
fi

# Configuration
BUILD_DIR="$(pwd)/release-build"
SRC_DIR="$(pwd)"
INSTALL_DIR="$BUILD_DIR/install"
PKG_NAME="odan"
ARCH="linux-x86_64"
OUT_DIR="$BUILD_DIR/out"
TARBALL="${PKG_NAME}-${VERSION}-${ARCH}.tar.gz"
SHA_FILE="SHA256SUMS"
GPG_KEY=""   # optional: specify keyid to sign with, otherwise default gpg key is used

# Clean
rm -rf "$BUILD_DIR"
mkdir -p "$BUILD_DIR" "$INSTALL_DIR" "$OUT_DIR"

# Install build deps (Ubuntu/Debian)
# Adjust to your distro or build container
sudo apt update
sudo apt install -y build-essential libtool autotools-dev automake pkg-config \
  bsdmainutils python3 libevent-dev libboost-system-dev libboost-filesystem-dev \
  libboost-chrono-dev libboost-test-dev libssl-dev libdb++-dev libdb-dev curl ca-certificates git

# Build
cd "$SRC_DIR"
echo "Running autogen/configure"
./autogen.sh
# Example configure: enable release hardening and disable GUI (change as you need)
./configure --disable-gui --enable-hardening --disable-wallet
echo "make -j$(nproc)"
make -j"$(nproc)"

# Install into a temporary directory
echo "Installing into $INSTALL_DIR"
make install DESTDIR="$INSTALL_DIR"

# Create tarball (only include relevant binaries and docs)
cd "$INSTALL_DIR"
mkdir -p package/usr/local/bin package/usr/local/share/doc/$PKG_NAME
# copy binaries
cp -a usr/local/bin/odand usr/local/bin/odan-cli ./package/usr/local/bin/
# copy README / license if present
if [ -f "$SRC_DIR/README.md" ]; then
  cp "$SRC_DIR/README.md" package/usr/local/share/doc/$PKG_NAME/
fi
if [ -f "$SRC_DIR/doc/LICENSE" ]; then
  cp "$SRC_DIR/doc/LICENSE" package/usr/local/share/doc/$PKG_NAME/
fi

tar -czf "$OUT_DIR/$TARBALL" -C package .

# Generate checksums
cd "$OUT_DIR"
sha256sum "$TARBALL" > "$SHA_FILE"

# Sign the SHA file and the tarball
# You must have a GPG key in your local keyring or specify --local-user <keyid>
if [ -n "$GPG_KEY" ]; then
  gpg --batch --yes --local-user "$GPG_KEY" --armor --detach-sign "$TARBALL"
  gpg --batch --yes --local-user "$GPG_KEY" --armor --detach-sign "$SHA_FILE"
  gpg --batch --yes --local-user "$GPG_KEY" --armor --output "${SHA_FILE}.asc" --sign "$SHA_FILE"
else
  # use default key
  gpg --batch --yes --armor --detach-sign "$TARBALL"
  gpg --batch --yes --armor --detach-sign "$SHA_FILE"
  gpg --batch --yes --armor --output "${SHA_FILE}.asc" --sign "$SHA_FILE"
fi

echo "Release artifacts in: $OUT_DIR"
ls -lh "$OUT_DIR"
echo ""
echo "Files created:"
echo " - $TARBALL"
echo " - $TARBALL.asc          (detached ascii signature)"
echo " - $SHA_FILE             (sha256 sums)"
echo " - ${SHA_FILE}.asc       (GPG-signed SHA file)"
