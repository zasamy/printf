#include "main.h"
/**
 * _puts - used to print a string with newline
 * @st: string to be printed
 *
 * Return: void
 */
int _puts(char *st)
{
char *b = st;
while (*st)
_putchar(*st++);
return (st - b);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
