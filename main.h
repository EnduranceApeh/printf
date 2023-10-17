#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * struct format - a structure
 * @id: for the struct
 * @f: function pointer
 */
typedef struct format
{
	char *id;
	int (*f)();
} match;

int _printf(const char *format, ...);
int _putchar(char c);

int printf_char(va_list val);
int printf_string(va_list val);
int _strlenc(const char *str);
int _strlen(char *str);
int print_percent(void);
int print_int(va_list args);
int _print_dec(va_list args);

int handle_format_specifier(const char **format, va_list args);
int _print_string(char *str);
#endif
