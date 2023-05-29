#include "main.h"

/**
 * print_string - Print string
 * @list: list.
 *
 * Return: String length.
 */

int print_string(va_list list)
{
	char *ptr;
	int ptr_len;

	ptr = va_arg(list, char*);
	ptr_len = print((ptr != NULL) ? ptr : "(null)");

	return (ptr_len);
}

