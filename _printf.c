#include "main.h"

/**
 * _printf - Function that prints.
 *
 * @format: a string composed of zero or more characters to print or use as
 * directives that handle subsequent arguments and special characters.
 *
 * Description: This function can take a variable number and type of arguments
 * that should be printed to standard output.
 *
 * Return: int
 */
int _printf(const char *format, ...)
{
	va_list args;
	int j = 0, chars_printed = 0;

	va_start(args, format);
	while (format && format[j])
	{
		if (format[j] != '%')
		{
			chars_printed += _putchar(format[j]);
		}
		else if (format[j + 1])
		{
			j++;
			if (format[j] == 'c' || format[j] == 's')
				chars_printed += format[j] == 'c' ? _putchar(va_arg(args, int)) :
				print_string(va_arg(args, char *));
			else if (format[j] == 'd' || format[j] == 'i')
				chars_printed += print_num(va_arg(args, int));
			else if (format[j] == 'b')
				chars_printed += print_binary((unsigned int)va_arg(args, int));
			else if (format[j] == 'r')
				chars_printed += print_reverse(va_arg(args, char *));
			else if (format[j] == 'R')
				chars_printed += print_rot13(va_arg(args, char *));
			else if (format[j] == 'o' || format[j] == 'u' ||
			format[j] == 'x' || format[j] == 'X')
				chars_printed += print_odh(format[j], (unsigned int)va_arg(args, int));
			else if (format[j] == 'S')
				chars_printed += print_S(va_arg(args, char *));
			else if (format[j] == 'p')
				chars_printed += print_pointer(va_arg(args, void *));
			else
				chars_printed += print_unknown_spec(format[j]);
		}
		j++;
	}
	va_end(args);
	return (chars_printed);
}
