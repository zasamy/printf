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
 * _putchar - writes the character c
 * @c: character to be printed
 * Return:if success 1
 * on error, -1
 */
int _putchar(int c)
{
static int i;
static char buf[OUTPUT_BUF_SIZE];
if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
{
write(1, buf, i);
i = 0;
}
if (c != BUF_FLUSH)
buf[i++] = c;
return (1);
}
