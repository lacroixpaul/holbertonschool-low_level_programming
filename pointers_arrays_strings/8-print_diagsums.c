#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the first element of the square.
 * @size: size of the matrix.
 **/

void print_diagsums(int *a, int size)
{
	int i;
	long int sum_a = 0, sum_b = 0;

	if (size == 1)
	{
		sum_a = sum_b = a[0];
	}
	else if (size > 1)
	{
		for (i = 0; i < size; i++)
		{
		sum_a += a[i * (size + 1)];
		sum_b += a[i * size + (size - 1 - i)];
		}
	}
	printf("%ld, ", sum_a);
	printf("%ld\n", sum_b);
}
