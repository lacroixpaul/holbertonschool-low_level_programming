#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the first element of the square.
 * @size: size of the matrix.
 **/

void print_diagsums(int *a, int size)
{
	int i, j;
	unsigned int sum_a = 0, sum_b = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum_a = sum_a + a[i * size + i];
			}
			else if (i + j == size - 1)
			{
				sum_b = sum_b + a[i * size + (size - i - 1)];
			}
		}
	}
	printf("%d, ", sum_a);
	printf("%d\n", sum_b);
}
