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
	char charac, *string;
	/* check if format is NULL */
	if (format == NULL)
		return (-1);
	va_start(list_of_args, format);
	/* Iterate throuh the string to check for format specifiers */
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			length += _putchar(format[i]);
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
					length += _putchar(string[j]);
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
<<<<<<< HEAD
=======
/**
 * handle_format_specifier - a function that handles the format specifier
 * @format: pointer to a char pointer
 * @args: Takes in the va_list number
 * Return: Returns an integer
 */

int handle_format_specifier(const char **format, va_list args)
{
	int length = 0;
	char charac;
	char *string;
	int i;

	if (**format == 'c')
	{
		charac = va_arg(args, int);
		_putchar(charac);
		length++;
	}
	else if (**format == 's')
	{
		string = va_arg(args, char*);
		for (i = 0; string[i] != '\0'; i++)
		{
			_putchar(string[i]);
			length++;
		}
	}
	else if (**format == '%')
	{
		_putchar('%');
		length++;
	}
	(*format)++;
	return (length);
}
>>>>>>> 4db2ac57a4771735555db9879ed14914ef11a231
