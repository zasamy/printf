#include "main.h"

/**
 * print_hex - Print a number in hexadecimal in lowercase
 * @ap: the argument ppointer
 * @params: the parameters struct
 *
 * Return: integer
 */

int print_hex(va_list ap, params_t *params)
{
	unsigned long l;
	int i = 0;
	char *ptr;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	ptr = convert(l, 16, CONVERT_UNSIGNED | CONVERT_LOWERCASE, params);
	if (params->hashtag_flag && l)
	{
		*--ptr = 'x';
		*--ptr = '0';
	}
	params->unsign = 1;
	return (i += print_number(ptr, params));
}

/**
 * print_HEX - Print a number in hexadecimal in uppercase
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: integer
 */

int print_HEX(va_list ap, params_t *params)
{
	unsigned long l;
	int i = 0;
	char *ptr;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);

	ptr = convert(l, 16, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && l)
	{
		*--ptr = 'X';
		*--ptr = '0';
	}
	params->unsign = 1;
	return (i += print_number(ptr, params));
}
/**
 * print_binary - Print a number in base 2
 * @ap: the argument
 * @params: the parametrs struct
 *
 * Return: integer
 */

int print_binary(va_list ap, params_t *params)
{
	unsigned int m = va_arg(ap, unsigned int);
	char *ptr = convert(m, 2, CONVERT_UNSIGNED, params);
	int i = 0;

	if (params->hashtag_flag && m)
		*--ptr = '0';
	params->unsign = 1;
	return (i += print_number(ptr, params));
}

/**
 * print_octal - Print a unsigned octal
 * @ap: the argument pointer
 * @params: the parameters struct
 *
 * Return: integer
 */

int print_octal(va_list ap, params_t *params)
{
	unsigned long l;
	char *ptr;
	int i = 0;

	if (params->l_modifier)
		l = (unsigned long)va_arg(ap, unsigned long);
	else if (params->h_modifier)
		l = (unsigned short int)va_arg(ap, unsigned int);
	else
		l = (unsigned int)va_arg(ap, unsigned int);
	ptr = convert(l, 8, CONVERT_UNSIGNED, params);
	if (params->hashtag_flag && 1)
		*--ptr = '0';
	params->unsign = 1;
	return (i += print_number(ptr, params));
}

