#include "main.h"
#include <stdio.h>

/**
 * print_line-  draws a straight line in the terminal.
 * @n : number of _.
 **/

void print_line(int n)
{
	int i;

	for (i = 1; i <= n; i++)
		if (n > 0)
			_putchar('_');
	_putchar('\n');
}
