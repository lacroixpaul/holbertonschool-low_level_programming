#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the content of an array of integers.
 * @a: an array of integers.
 * @n : the number of elements of the array.
 **/

void reverse_array(int *a, int n)
{
int temp[100];
int i;

	for (i = 0; i < n; i++)
	{
		temp[i] = a[n - i - 1];
	}
	for (i = 0; i < n; i++)
	{
		a[i] = temp[i];
	}
}
