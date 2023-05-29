#include "main.h"

/**
 * handler - Format control
 * @str: String
 * @list: arguments
 *
 * Return: size of arguments with the total size of the base string
 **/
int handler(const char *str, va_list list)
{
	int size, j, m;

	size = 0;
	for (j = 0; str[j] != 0; j++)
	{
		if (str[j] == '%')
		{
			m = percent_handler(str, list, &j);
			if (m == -1)
				return (-1);

			size += m;
			continue;
		}

		_putchar(str[j]);
		size = size + 1;
	}


	return (size);
}

/**
 * percent_handler - Control percent format
 * @str: String
 * @list:arguments
 * @j: Iterator
 *
 * Return: Size of the numbers of elements printed
 **/
int percent_handler(const char *str, va_list list, int *j)
{
	int size, i, number_formats;
	format formats[] = {
		{'s', print_string}, {'c', print_char},
		{'d', print_integer}, {'i', print_integer},
		{'b', print_binary}, {'u', print_unsigned},
		{'o', print_octal}, {'x', print_hexadecimal_low},
		{'X', print_hexadecimal_upp}, {'p', print_pointer},
		{'r', print_rev_string}, {'R', print_rot}
	};

	*j = *j + 1;

	if (str[*j] == '\0')
		return (-1);

	if (str[*j] == '%')
	{
		_putchar('%');
		return (1);
	}

	number_formats = sizeof(formats) / sizeof(formats[0]);
	for (size = i = 0; i < number_formats; i++)
	{
		if (str[*j] == formats[i].type)
		{
			size = formats[i].f(list);
			return (size);
		}

	}

	_putchar('%'), _putchar(str[*j]);

	return (2);
}
