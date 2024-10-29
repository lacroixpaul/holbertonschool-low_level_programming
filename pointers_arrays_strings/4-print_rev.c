#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints a string, in reverse.
 * @s: string to print.
 **/

void print_rev(char *s)
{
int i;

	for (i = (_strlen(s) - 1);  i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
