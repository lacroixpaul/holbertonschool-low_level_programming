#include "main.h"
#include <stdio.h>

/**
 * puts_half - prints half of a string.
 * @str: string to analyse.
 **/

void puts_half(char *str)
{
int i, n;

	for (i = 0;  str[i] != '\0'; i++)
	{
	}
		n = i / 2;
		for (n; str[n] != '\0'; n++)
	{
		_putchar(str[n]);
	}
	_putchar('\n');
}

