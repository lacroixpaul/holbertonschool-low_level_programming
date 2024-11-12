#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * **alloc_grid- returns a pointer to a 2 dimensional array of integers.
 * @width : number of column.
 * @height : number of line.
 * Return: a pointer of NULL in case of error.
 **/

int **alloc_grid(int width, int height)
{
	int i = 0;
	int **array;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));

	if (array == 0)
		return (NULL);
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
	}
	if (array == 0)
		return (NULL);
return (array);
}
