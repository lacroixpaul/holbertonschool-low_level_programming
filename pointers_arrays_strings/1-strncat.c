#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings.
 * @dest: string of destinatation.
 * @src: string to add.
 * @n: bite limit.
 * Return: dest.
 **/

char *_strncat(char *dest, char *src, int n)
{
int count_dest;
int j;

	for (count_dest = 0; dest[count_dest] != '\0'; count_dest++)
	{
	}
	for (j = 0; src[j] != '\0' && j < n; j++, count_dest++)
	{
		dest[count_dest] = src[j];
	}
	if (j > n)
	dest[count_dest] = '\0';
	return (dest);
}
