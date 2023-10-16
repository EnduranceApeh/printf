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
			_putchar(format[i]);
			length++;
		}
		else
		{
			format++;
			if (format[i] == 'c')
			{
				charac = va_arg(list_of_args, int);
				_putchar(charac);
			}
			if (formart[i] == 's')
			{
				string = va_arg(list_of_arga, char*);
				for (j = 0; string[j] != '\0'; j++)
				{
					_putchar(string[j]);
					length++;
				}
			}
			if (format[i] == '%')
			{
				_putchar('%');
			}
		}
	}
	va_end(list_of_args);
	return (length);
}
