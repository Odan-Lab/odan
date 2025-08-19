# How to Run Odan-Qt.app with a Self-Signed Certificate on macOS

If you have downloaded `Odan-Qt.app` and want to run it on macOS, you may encounter security restrictions. This guide provides specific instructions for using a self-signed certificate to allow `Odan-Qt.app` to run.

## Steps

### 1. Create a Self-Signed Certificate (Skip if you already have a certificate for code signing)

1. Open **Keychain Access** (Applications > Utilities > Keychain Access).
2. In the **Keychain Access** menu, select **Certificate Assistant > Create a Certificate**.
3. Enter a name for your certificate (e.g., "Odan Certificate").
4. Set **Identity Type** to **Self-Signed Root**.
5. Set **Certificate Type** to **Code Signing**.
6. Click **Create** to generate the certificate.

### 2. Sign the Odan-Qt.app Application

1. Open **Terminal**.
2. Use the following `codesign` command to sign `Odan-Qt.app` with the newly created certificate:
   
   ```
   codesign --force --deep --sign "Odan Certificate" /path/to/Odan-Qt.app
   ```
   
   Replace "Odan Certificate" with the name of your certificate, and ensure /path/to/Odan-Qt.app/ points to the actual location of the app on your system.
   Remove Odan from MacOS Quarantine:
   `sudo xattr -rd com.apple.quarantine Odan-Qt.app`
   
3. Open Odan from the Applications menu
	

***Note:** The same procedure can be used to sign `odand`, `odan-cli` and other command line binaries.
