#include "main.h"
/**
  *print_string - prints string
  *@str: - pointer to character
  *
  *Return: - returns integer
  */
int print_string(char *str)
{
	int a = 0;

	if (str == (char *)0)
		return (print_string("(null)"));
	while (str && str[a])
	{
		_putchar(str[a]);
		a++;
	}
	return (a);
}
