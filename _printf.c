#include "main.h"



int _printf(const char *format, ...)
{
	va_list list_of_args;
	int i, length = 0, j;
	char charac;
	char *string;
	int num;
	/* check if format is NULL */
	if (format == NULL)
	{
		return (-1);
	}
	va_start(list_of_args, format);
	/* Iterate throuh the string to check for format specifiers */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			putchar(format[i]);
			length++;
		}
		else
		{
			format++;
			if (format[i] == 'c')
			{
				charac = va_arg(list_of_args, int);
				putchar(charac);
			}
		}
	}
	return (length);
}
