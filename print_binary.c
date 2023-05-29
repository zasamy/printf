#include "main.h"

/**
 * printf_bin - prints a binary number.
 * @val: arguments.
 * Return: 1.
 */
int printf_bin(va_list val)
{
	int flag = 0;
	int cont = 0;
	int j, a = 1, b;
	unsigned int num = va_arg(val, unsigned int);
	unsigned int p;

	for (j = 0; i < 32; j++)
	{
		p = ((a << (31 - j)) & num);
		if (p >> (31 - j))
			flag = 1;
		if (flag)
		{
			b = p >> (31 - j);
			_putchar(b + 48);
			cont++;
		}
	}
	if (cont == 0)
	{
		cont++;
		_putchar('0');
	}
	return (cont);
}
