#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strncpy - copies a string.
 * @dest: string of destinatation.
 * @src : string to copy.
 * @n: bite limit.
 * Return: dest.
 **/

char *_strncpy(char *dest, char *src, int n)
{
int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/**
 * *_realloc - reallocates a memory block using malloc and free.
 * @ptr : pointer to the memory previously allocated.
 * @old_size :  is the size, in bytes, of the allocated space for ptr.
 * @new_size : is the new size, in bytes of the new memory block.
 **/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int i = 0;
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
		malloc(new_size);
	if (new_size == 0 && ptr != NULL)
		free(ptr);
	else if (new_size != 0 & new_size != old_size)
	{
		void *new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
			_strncpy(ptr, new_ptr, new_size;
	}
}
