#include "main.h"
/**
 * printf_char - a function to print a character
 * @val: holds character value
 * Return: an int
 */

int printf_char(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (0);
}
