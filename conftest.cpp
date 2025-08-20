/* confdefs.h */
#define PACKAGE_NAME "Odan Core"
#define PACKAGE_TARNAME "odan"
#define PACKAGE_VERSION "27.1.0"
#define PACKAGE_STRING "Odan Core 27.1.0"
#define PACKAGE_BUGREPORT "https://github.com/Odan-Lab/odan/issues"
#define PACKAGE_URL "https://odanforext.xyz/"
#define HAVE_CXX20 1
#define HAVE_STDIO_H 1
#define HAVE_STDLIB_H 1
#define HAVE_STRING_H 1
#define HAVE_INTTYPES_H 1
#define HAVE_STDINT_H 1
#define HAVE_STRINGS_H 1
#define HAVE_SYS_STAT_H 1
#define HAVE_SYS_TYPES_H 1
#define HAVE_UNISTD_H 1
#define STDC_HEADERS 1
#define HAVE_DLFCN_H 1
#define LT_OBJDIR ".libs/"
#define HAVE_CLMUL 1
#define ENABLE_SSE41 1
#define ENABLE_AVX2 1
#define ENABLE_X86_SHANI 1
#define HAVE_PTHREAD_PRIO_INHERIT 1
#define HAVE_PTHREAD 1
/* end confdefs.h.  */

  #include <atomic>
  #include <cstdint>
  #include <chrono>

  using namespace std::chrono_literals;

  int main() {
    std::atomic<bool> lock{true};
    lock.exchange(false);

    std::atomic<std::chrono::seconds> t{0s};
    t.store(2s);
    auto t1 = t.load();
    t.compare_exchange_strong(t1, 3s);

    std::atomic<double> d{};
    d.store(3.14);
    auto d1 = d.load();

    std::atomic<int64_t> a{};
    int64_t v = 5;
    int64_t r = a.fetch_add(v);
    return static_cast<int>(r);
  }

