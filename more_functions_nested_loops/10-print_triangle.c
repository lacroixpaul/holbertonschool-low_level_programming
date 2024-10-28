#include "main.h"
#include <stdio.h>

/**
 * print_triangle-  prints a reverse triangle.
 * @size : size of the triangle.
 **/

void print_triangle(int size)
{
int ligne = 0;
int espace = 0;
int diese = 0;

	if (size == 0)
	{
		_putchar('\n');
		return;
	}
	for (ligne = size; ligne > 0; ligne--)
	{
	{
		for (espace = 0; espace < (ligne - 1) ; espace++)
			_putchar(' ');
	}
	{
		for (diese = 0 ; diese < (size - ligne + 1); diese++)
			_putchar(35);
	}
	_putchar('\n');
	}
}
