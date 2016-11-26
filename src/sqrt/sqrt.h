#ifndef _SQRT_H_
#define _SQRT_H_

#include <nm_auto_config.h>
#include <nm_auto_headers.h>

#if (MSYS_NT)

#define SQRT_API __declspec(dllexport) __stdcall

#ifdef __cplusplus
extern "C" {
#endif

double SQRT_API _sqrt_(double);

#ifdef __cplusplus
}
#endif

#else

#define SQRT_API

double _sqrt_(double);

#endif // MSYS_NT



#endif // _SQRT_H_
