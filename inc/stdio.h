#ifndef STDIO_H
#define STDIO_H

#include <stddef.h>

#if (__STDC_VERSION__ >= 199901L)
extern int sprintf(char *restrict buffer, const char *restrict format, ...);
#else
extern int sprintf(char *buffer, const char *format, ...);
#endif

#if (__STDC_VERSION__ >= 201112L)
extern int snprintf(char *restrict buffer, size_t bufsz, const char *restrict format, ...);
#endif

#if (__STDC_VERSION__ >= 201112L) && (defined(__STDC_WANT_LIB_EXT1__) && (__STDC_WANT_LIB_EXT1__ >= 1))
extern int sprintf_s(char *restrict buffer, rsize_t bufsz, const char *restrict format, ...);
#endif

#if (__STDC_VERSION__ >= 201112L) && (defined(__STDC_WANT_LIB_EXT1__) && (__STDC_WANT_LIB_EXT1__ >= 1))
extern int snprintf_s(char *restrict buffer, rsize_t bufsz, const char *restrict format, ...);
#endif

#endif
