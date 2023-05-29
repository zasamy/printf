#include "main.h"


/**
 * _strlen - Calculate the length of a string
 * @str: String
 *
 * Return: Length
 **/
int _strlen(const char *str)
{
	int j;

	for (j = 0; str[j] != 0; j++)
		;

	return (j);
}

/**
 * print - print char.
 * @str: string.
 *
 * Return: string length.
 */

int print(char *str)
{
	int j;

	for (j = 0; str[j] != '\0'; ++j)
		_putchar(str[j]);

	return (j);
}
