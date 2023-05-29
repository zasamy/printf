#include "main.h"

/**
 * _putchar - writes the character i to stdout
 * @i: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char i)
{
	return (buffer(i));
}

/**
 * buffer - Save the character in a buffer
 * @i: Character
 *
 * Return: 1
 **/
int buffer(char i)
{
	static char buffering[1024];
	static int j;

	if (i == -1 || j == 1024)
	{
		write(1, buffering, j);
		j = 0;
	}

	if (i != -1)
		buffering[j++] = i;

	return (1);
}
