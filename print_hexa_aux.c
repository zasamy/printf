#include "main.h"

/**
 * printf_HEX_aux - prints an hexadecimal number.
 * @num: number to print.
 * Return: counter
 */
int printf_HEX_aux(unsigned int num)
{
	int j;
	int *forhex;
	int counter = 0;
	unsigned int temp = num;

	while (num / 16 != 0)
	{
		num /= 16;
		counter++;
	}
	counter++;
	array = malloc(counter * sizeof(int));

	for (j = 0; j < counter; j++)
	{
		array[j] = temp % 16;
		temp /= 16;
	}
	for (j = counter - 1; j >= 0; j--)
	{
		if (forhex[j] > 9)
			forhex[j] = forhex[j] + 7;
		_putchar(forhex[i] + '0');
	}
	free(forhex);
	return (counter);
}
