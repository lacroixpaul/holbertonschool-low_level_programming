#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * * _strdup-  creates an array of chars.
 * @str : iniatilize the array.
 * Return: a pointer to the array, or NULL if it fails.
 **/

char *_strdup(char *str)
{
	int size = 0;
	int i = 0;
	char *newstr;

	if (str == 0)
	{
		return (NULL);
	}
	for (; str[size] != '\0'; size++)
	{
	}
	newstr = (char *)malloc((size + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	else
		for (; i < size; i++)
		{
			newstr[i] = str[i];
		}
	newstr[size] = '\0';
	return (newstr);
}
