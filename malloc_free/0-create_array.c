#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array -  creates an array of chars.
 * @size : size of the array.
 * @c : iniatilize the array.
 * Return: a pointer to the array, or NULL if it fails.
 **/

char *create_array(unsigned int size, char c)
{
	char *array = (char *)malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0 || array == 0)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		array[i] = c;
	}
return (array);
}
