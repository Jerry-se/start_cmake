#ifndef TEST_DYNAMIC_LIB_PUBLIC_H_
#define TEST_DYNAMIC_LIB_PUBLIC_H_

#if defined(_WIN32) && defined(MYSDK_EXPORTS)
// On Windows system, functions are exported in a DLL
#define MY_EXPORT __declspec(dllexport)
#define MY_CALLCONV __stdcall
#else
#define MY_EXPORT __declspec(dllimport)
#define MY_CALLCONV __stdcall
#endif

MY_EXPORT int MY_CALLCONV RetMySubNumber(int a, int b);

#endif