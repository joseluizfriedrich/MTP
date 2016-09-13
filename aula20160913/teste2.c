#if defined(__linux__) || defined(__APPLE__)
   #include <unistd.h>
   long PID = getpid();
#elif defined(_WIN32) || defined(_WIN64)
   #include <windows.h>
   long PID = GetCurrentProcessId();
#else
   #error "Platform not supported"
#endif
