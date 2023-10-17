#include "main.h"
/**
 * _strlen - a function to print the length of a string
 * @str: the string pointer
 * Return: an integer which is string length
 */

int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * _strlenc - a function to print the length of a string
 * @str: the string pointer
 * Return: an integer which is string length
 */
int _strlenc(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
