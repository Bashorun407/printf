#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
int _putchar(char c);
int _printf(const char *format, ...);
int _print_int(va_list args);
int _print_char(va_list args);
int _print_string(char *);
int _print_uint(va_list args);
int _print_percent(char *);

#endif

