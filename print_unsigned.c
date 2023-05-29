#include "main.h"

/**
 * print_unsigned - Print a unsigned integer
 * @list: Number to print
 *
 * Return: Length of the number
 **/
int print_unsigned(va_list list)
{
	char *ptr_buff;
	int size;

	ptr_buff = itoa(va_arg(list, unsigned int), 10);

	size = print((ptr_buff != NULL) ? ptr_buff : "NULL");

	return (size);
}
