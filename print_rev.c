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
		str = malloc(sizeof(char) * a);
		if (str == NULL)
		{
			free(str);
			return (0);
		}
		for (b = (a - 1); b >= 0; b--)
		{
			*(str + c) = *(s + b);
			c++;
		}
		*(str + a) = '\0';
		chars_printed = print_string(str);
		return (chars_printed);
	}
	return (0);
}
