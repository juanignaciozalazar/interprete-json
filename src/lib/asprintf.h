#ifndef HAVE_ASPRINTF
#ifndef ASPRINTF_H
#define ASPRINTF_H 1

#include <stdarg.h>

int vasprintf (char **, const char *, va_list);

int asprintf (char **, const char *, ...);

#endif
#endif