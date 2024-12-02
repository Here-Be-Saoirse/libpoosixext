#ifndef POSIXEXT_H
#define POSIXEXT_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    time_t timegm(struct tm *tm);
#ifdef __cplusplus
extern "C" {
#endif

FILE *fmemopen(void *buf, size_t size, const char *mode);
FILE *open_memstream(char **bufptr, size_t *sizeptr);

#ifdef __cplusplus
}
#endif

#endif // POSIXEXT_H
