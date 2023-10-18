#include "main.h"
/**
 * print_integer - convert inter to a string
 * @value: store value
 * Return: returns an integer
 */

int print_integer(int value)
{
	int i = 0;
	char buffer[32];
	int printed = snprintf(buffer, sizeof(buffer), "%d", value);

	for (i = 0; i < printed; i++)
	{
		_putchar(buffer[i]);
	}
	return (printed);
}
