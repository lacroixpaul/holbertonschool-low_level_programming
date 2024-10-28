#include "main.h"
#include <stdio.h>

/**
 * print_diagonal-  draws a straight line in the terminal.
 * @n : number of lines.
 **/

void print_diagonal(int n)
{
	int i = 0;
	int j = 0;

		if (n < 1)
		{
			_putchar('\n');
		}
		else if (n > 0)
		{
			for (i = 0; i <= n; i++)
		{
				for (j = 0; j <= i; j++)
				{
					_putchar(' ');
				}
		_putchar(92);
		_putchar('\n');
}
}
}
