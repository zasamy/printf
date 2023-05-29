#include "main.h"

/**
 * printf_HEX - prints an hexgecimal number.
 * @val: arguments.
 * Return: counter.
 */
int printf_HEX(va_list val)
{
	int j;
	int *forhex;
	int counter = 0;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	forhex = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
	for (j = counter - 1; j >= 0; i--)
	{
		if (forhex[j] > 9)
			array[j] = array[j] + 7;
		_putchar(forhex[j] + '0');
	}
	free(forhex);
	return (counter);
}
