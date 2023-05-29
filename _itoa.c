#include "main.h"

/**
 * itoa - integer to ASCII
 * @num: num
 * @base: base
 *
 * Return: char
 **/
char *itoa(long int num, int base)
{
	static char *array = "0123456789abcdef";
	static char buffer[50];
	char sign = 0;
	char *str;
	unsigned long n = num;

	if (num < 0)
	{
		n = -num;
		sign = '-';
	}
	str = &buffer[49];
	*str = '\0';

	do      {
		*--str = array[n % base];
		n /= base;
	} while (n != 0);

	if (sign)
		*--str = sign;
	return (str);
}
