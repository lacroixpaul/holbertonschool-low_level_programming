#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: nombre d'entree.
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		for (n = n; n == 98; n++)
		{
		_putchar(n);
		}
		else if (n == 0)
		{
		_putchar(n);
		}
		else
		{
		for (n = n; n == 98; n--)
		_putchar(n);
		}}
		_putchar('\n');
}
