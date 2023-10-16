#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int handle_format_specifier(const char **format, va_list args);
int _print_string(char *str);
#endif
