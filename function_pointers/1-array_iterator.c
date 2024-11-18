#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* array_iterator- executes a function as a parameter on element of an array.
* @array: of the parameters.
* @size: of the array.
* @action: pointer to the function to use.
**/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i = 0;

	for (; i != size; i++)
	{
	action(array[i]);
	}
}
