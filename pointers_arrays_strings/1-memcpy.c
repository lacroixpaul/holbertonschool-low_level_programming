#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area.
 * @dest: memory area of destination.
 * @n: number of byte to copy.
 * @src : memory area to copy.
 * Return: a pointer to the memory area dest.
 **/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
