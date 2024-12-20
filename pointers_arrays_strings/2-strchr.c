#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string.
 * @s: string to search.
 * @c: charactere to search.
 * Return: a pointer to the first occurrence, or NULL if no occurence.
 **/

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}
	if (c == '\0')
		return (s + i);
	return (NULL);
}
