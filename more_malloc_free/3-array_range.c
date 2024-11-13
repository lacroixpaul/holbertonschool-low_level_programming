#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min : starting value.
 * @max : ending value.
 * Return: NULL if error.
 **/

int *array_range(int min, int max)
{
	int *array;
	int i = 0;

	if (min > max)
	{
		return (NULL);
	}
	array = (int *)malloc((max - min + 1) * sizeof(int));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; i <= (max - min + 1); i++)
	{
		array[i] = i + min;
	}

	return (array);
}
