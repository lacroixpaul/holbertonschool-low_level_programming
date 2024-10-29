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
	if (n % 2 == 0)
	for (; str[n] != '\0'; n++)
	{
		putchar(str[n]);
	}
	else if (n % 2 == 1)
	n = n - 1;
	for (; str[n] != '\0'; n++)
	{
		putchar(str[n]);
	}
	putchar('\n');
}
