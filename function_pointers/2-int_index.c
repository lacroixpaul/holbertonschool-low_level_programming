#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* int_index- searches for an integer.
* @array: of the parameters.
* @size: number of element in the array.
* @cmp: pointer to the function to be used to compare values.
* Return:  returns the index of the first integer or -1.
**/

int int_index(int *array, int size, int (*cmp)(int))
{
int i = 0;

	if (size <= 0)
		return (-1);

	for (; i != size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
