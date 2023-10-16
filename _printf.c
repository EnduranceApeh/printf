#include "main.h"
/**
 * _printf - a replica of the original printf function
 * @format: the first argument
 * Return: Return an integer
 */
int _printf(const char *format, ...)
{
	va_list list_of_args;
	int i, length = 0, j;
	char charac;
	char *string;
	/* check if format is NULL */
	if (format == NULL)
		return (-1);
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
				length++;
				charac = va_arg(list_of_args, int);
				_putchar(charac);
			}
			if (format[i] == 's')
			{
				string = va_arg(list_of_args, char*);
				for (j = 0; string[j] != '\0'; j++)
				{
					length++;
					_putchar(string[j]);
				}
			}
			if (format[i] == '%')
			{
				length++;
				_putchar('%');
			}
		}
	}
	va_end(list_of_args);
	return (length);
}
