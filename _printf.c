#include "main.h"
/**
 * _printf - a printf clone that prints int and strings
 * @format: format identifier
 * Return: an int
 */

int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"&&", print_percent},
		{"%i", print_int}, {"%d", _print_dec}
	};
	va_list args;
	int i = 0, length = 0;
	int a;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
	{
		return (-1);
	}
/**create a label to tell the while loop*/

Here:
	while (format[i] != '\0')
	{
		a = 4;
		while (a >= 0)
		{
			/** checking for place holders*/
			if (m[a].id[0] == format[i] && m[a].id[1] == format[i + 1])
			{
				length = length + m[a].f(args);
				i = i + 2;
				goto Here;
			}
			a--;
		}
		_putchar(format[i]);
		i++;
		length++;
	}
	va_end(args);
	return (length);
}
