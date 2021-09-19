#ifndef TEST_DYNAMIC_LIB_PUBLIC_H_
#define TEST_DYNAMIC_LIB_PUBLIC_H_

#if defined(_WIN32)
#if defined(MYSDK_IMPLEMENTATION)
// On Windows system, functions are exported in a DLL
#define MY_EXPORT __declspec(dllexport)
#else
#define MY_EXPORT __declspec(dllimport)
#endif
#else
#if defined(MYSDK_IMPLEMENTATION)
#define MY_EXPORT __attribute__((visibility("default")))
#else
#define MY_EXPORT
#endif
#endif

#if defined(_WIN32) && defined(MYSDK_EXPORTS)
#define MY_CALLCONV __stdcall
#else
#define MY_CALLCONV
#endif

MY_EXPORT int MY_CALLCONV RetMySubNumber(int a, int b);

#endif
