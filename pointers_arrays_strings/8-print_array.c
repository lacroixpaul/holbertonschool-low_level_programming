#include "main.h"
#include <stdio.h>

/**
 * print_array -  prints n elements of an array of integers.
 * @a : .
 * @n : number of elements of the array to be printed.
 **/

void print_array(int *a, int n)
{
int i;

	for (i = 0; i <= (n - 1); i++)
	{
		if (i < (n - 1))
		{
			printf("%d, ", a[i]);
		}
		else if (i == (n - 1))
		{
			printf("%d\n", a[i]);
		}
	}
}
