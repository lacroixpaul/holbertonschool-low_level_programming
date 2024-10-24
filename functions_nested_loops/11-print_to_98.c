#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: nombre d'entree.
 */

void print_to_98(int n)
{{
	if (n < 98)
	{
		for (n = n; n < 99; n++)
		{
		_putchar(n + '0');
		}}
	else if (n == 0)
		{
		_putchar(n + '0');
		}
	else
		{
		for (n = n; n > 97; n--)
		_putchar(n + '0');
		}}
		_putchar('\n');
}
