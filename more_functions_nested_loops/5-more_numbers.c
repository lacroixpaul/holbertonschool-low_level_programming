#include "main.h"
#include <stdio.h>

/**
 *  print_more_numbers -  prints 10 times the numbers, from 0 to 14.
 **/

void more_numbers(void);
{
	int i;
	int j;

	for (i = 0; i < 11; i++)
	{
		for (j = 0; j < 15; j++)
		{
		if (j > 9)
		{
		_putchar((j / 10) + '0');
		}
		_putchar((j % 10) + '0');
	}
		_putchar('\n');
	}
}
