#include <stdlib.h>
#include <stdio.h>

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: nombre d'entree.
 */

void print_to_98(int n)
{
		if (n < 98)
		{
		for (n = n; n < 99; n++)
		{
		if (n != 98)
		{
		printf("%d", n);
		}
		printf("%d, ", n);
		}
		}
		else if (n == 98)
		{
		printf("%d", n);
		}
		else
		{
		for (n = n; n > 97; n--)
		{
		if (n != 98)
		{
		printf("%d, ", n);
		}
		printf("%d", n);
		}
		}
		putchar('\n');
}
