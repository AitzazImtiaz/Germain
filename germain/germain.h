#pragma once
#ifdef GERMAIN_EXPORTS
#define GERMAIN_API __declspec(dllexport)
#else
#define GERMAIN_API __declspec(dllimport)
#endif

extern "C" GERMAIN_API bool prime_check(
    int n);
extern "C" GERMAIN_API int germain_main(
    int max, int i);