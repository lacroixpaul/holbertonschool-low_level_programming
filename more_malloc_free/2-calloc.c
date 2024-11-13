#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - allocates memory for an array.
 * @nmemb : number of elements.
 * @size : size of elements in bytes.
 * Return: NULL if error.
 **/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *array;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	array = malloc(nmemb * size);
	if (array == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
	((char *)array)[i] = 0;
	}
	return (array);
}



