#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings.
 * @dest: string of destinatation.
 * @src: string to add.
 * Return: dest.
 **/

char *_strcat(char *dest, char *src)
{
int count_dest;
int j;

	for (count_dest = 0; dest[count_dest] != '\0'; count_dest++)
	{
	}
	for (j = 0; src[j] != '\0'; j++, count_dest++)
	{
		dest[count_dest] = src[j];
	}
	dest[count_dest] = '\0';
	return (dest);
}
