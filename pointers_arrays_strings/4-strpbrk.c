#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to search.
 * @accept: list of accepted characters.
 * Return: a pointer to the byte in s or NULL.
 **/

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
