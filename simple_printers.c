#include "main.h"

/**
 * print_from_to - prints a rang of char  addresses
 * @start: starting
 * @stop: stopping
 * @except: except
 *
 * Return: number bytes printed
 */
int print_from_to(char *start, char *stop, char *except)
{
	int sum = 0;

	while (start <= stop)
	{
		if (start != except)
			sum += _putchar(*start);
		start++;
	}
	return (sum);
}

/**
 * print_rev - printaa a string in reverse
 * @ap: starting
 * @params: the parameters struct
 *
 * Return: number bytes printed
 */
int print_rev(va_list ap, params_t *params)
{
	int len, sum = 0;
	char *str = va_arg(ap, char *);
	(void)params;

	if (str)
	{
		for (len = 0; *str; str++)
			len++;
		str--;
		for (; len > 0; len--, str--)
			sum += _putchar(*str);
	}
	return (sum);
}

/**
 * print_rot13 - encode string using rot13
 * @ap: input string
 * @params: the parameters struct
 * Return: encoded string
 */
int print_rot13(va_list ap, params_t *params)
{
	int i, index;
	int j = 0;
	char arr[] = "NOPQRSTUVWXYZABCDEFGHIJKLM      nopqrstuvwxyzabcdefghijklm";
	char *a = va_arg(ap, char *);
	(void)params;

	i = 0;
	index = 0;
	while (a[i])
	{
		if ((a[i] >= 'A' && a[i] <= 'Z') || (a[i] >= 'a' && a[i] <= 'z'))
		{
			index = a[i] - 65;
			j += _putchar(arr[index]);
		}
		else
			j += _putchar(a[i]);
		i++;
	}
	return (j);
}