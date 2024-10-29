#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse.
 * @s: string to print.
 **/

void print_rev(char *s)
{
char *i = s;

	while (*i != '\0')
	{
		i++;
	}
		i--;
	while (i >= s)
	{
		_putchar(*i);
		i--;
	}
	_putchar('\n');
}
