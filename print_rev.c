#include "main.h"

/**
 * print_reverse - prints a string in reverse followed by a new line.
 * @s: string to be reversed
 * Return: number of chars printed
 */
int print_reverse(char *s)
{
	int a, b, c, chars_printed = 0;
	char *str;

	a = 0;
	b = 0;
	c = 0;
	if (s)
	{
		while (*(s + a))
			a++;
		ptr = malloc(sizeof(char) * a);
		if (ptr == NULL)
		{
			free(ptr);
			return (0);
		}
		for (b = (a - 1); b >= 0; b--)
		{
			*(ptr + c) = *(s + b);
			c++;
		}
		*(ptr + a) = '\0';
		chars_printed = print_string(ptr);
		return (chars_printed);
	}
	return (0);
}
