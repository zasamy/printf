#include "main.h"
/**
 * print_S - prints a string with custom formatting
 *
 * @str: string to be formatted
 * Return: number of chars printed
 */
int print_S(char *str)
{
	int j = 0, chars_printed = 0;
	char ch;

	while (str[j])
	{
		ch = str[j];
		if ((ch > 0 && ch  < 32) || ch >= 127)
		{
			chars_printed += _putchar('\\');
			chars_printed += _putchar('x');
			chars_printed += _putchar('0');
			chars_printed += print_odh('X', (unsigned int)ch);
		}
		else
		{
			chars_printed += _putchar(ch);
		}
		j++;
	}
	return (chars_printed);
}
