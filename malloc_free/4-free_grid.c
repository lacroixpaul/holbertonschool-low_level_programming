#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid- frees a 2 dimensional grid.
 * @grid : a 2 dimensional grid.
 * @height : number of line.
 **/

void free_grid(int **grid, int height)
{
	int i = 0, j = 0;
	int **array;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	array = (int **)malloc(height * sizeof(int *));

	if (array == NULL)
	{
		return (NULL);
	}
	for (; i < height; i++)
	{
		array[i] = (int *)malloc(width * sizeof(int));
		if (array[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			array[i][j] = 0;
		}
	}
return (array);
}
