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
			putchar('\n');
		}
		else if (n > 0)
		{
			for (i = 0; i <= n; i++)
		{
				for (j = 0; j <= i; j++)
				{
					putchar(' ');
				}
		putchar(92);
		putchar('\n');
}
}
}
