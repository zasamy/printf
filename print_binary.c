#include "main.h"

/**
 * print_binary - converts an unsigned int to binary
 * @num: int to be converted
 *
 * Return: no of resulting binary characters
 */
int print_binary(unsigned int num)
{
	int chars_printed = 0, indx = 0;
	char bin[sizeof(unsigned int) * 8];

	if (num == 0)
	{
		chars_printed += _putchar('0');
		return (chars_printed);
	}
	if (num == 1)
	{
		chars_printed += _putchar('1');
		return (chars_printed);
	}
	while (num > 0)
	{
		bin[indx] = '0' + (num % 2);
		num = num / 2;
		indx++;
	}
	indx--;
	while (indx >= 0)
	{
		chars_printed += _putchar(bin[indx]);
		indx--;
	}
	return (chars_printed);
}
