#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

int _printf(const char * const format, ...);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_string(va_list args);
int _print_uint(va_list args);
int _print_percent(void);

#endif

