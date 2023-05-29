#include "main.h"

/**
 * print_rev_string - Print a string in reverse
 * @list: List of arguments
 *
 * Return: Length of the string
 **/
int  print_rev_string(va_list list)
{
	int j, size;
	const char *ptr;

	ptr = va_arg(list, const char *);

	size = _strlen(str);

	for (j = size - 1; j >= 0; j--)
		_putchar(str[j]);

	return (size);
}
