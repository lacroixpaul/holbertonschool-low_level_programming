#include "main.h"
#include <stdio.h>

/**
 * _strstr - locates a substring..
 * @haystack: string to search.
 * @needle: substring to search.
 * Return: a pointer  the beginning of the located substring in s or NULL.
 **/

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	if ((haystack == NULL) || (needle == NULL))
	{
		return (NULL);
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
			{
				break;
			}
		}
			if (needle[j] == '\0')
			{
				return (haystack + i);
			}
	}
	return (NULL);
}
