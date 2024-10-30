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
	i--;
	n = i / 2;
		if (n % 2 == 1)
	{
		(n = (i + 1) / 2);
	}
		for (; n < i; n++)
	{
		_putchar(str[(n + 1)]);
	}
	_putchar('\n');
}
