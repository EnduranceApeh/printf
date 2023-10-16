#include "main.h"

/**
 * _printf - A custom printf function that prints to the STDO
 * @format: a constant character argument
 * Return: Returns an integer
 */

int _printf(const char *format, ...)
{
	va_list list_of_args;
	int length = 0;

	if (format == NULL)
		return (-1);

	va_start(list_of_args, format);

	for (; *format != '\0'; format++)
	{
		if (*format != '%')
		{
			_putchar(*format);
			length++;
		}
		else
		{
			format++;
			length += handle_format_specifier(&format, list_of_args);
		}
	}
	va_end(list_of_args);
	return (length);
}
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

	if (**format == 'c')
	{
		charac = va_arg(args, int);
		_putchar(charac);
		length++;
	}
	else if (**format == 's')
	{
		string = va_arg(args, char*);
		length += _print_string(string);
	}
	return (length);
}
