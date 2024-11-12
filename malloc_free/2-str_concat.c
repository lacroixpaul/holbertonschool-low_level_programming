#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *str_concat- concatenates two strings.
 * @s1 : content of origin.
 * @s2 : content to add.
 * Return: a pointer to the array, or NULL if it fails.
 **/

char *str_concat(char *s1, char *s2)
{
	int size_1 = 0;
	int size_2 = 0;
	char *newstr;
	int i = 0;
	int j = 0;

	for (; s1[size_1] != '\0'; size_1++)
	{
	}
	for (; s2[size_2] != '\0'; size_2++)
	newstr = (char *)malloc((size_1 + size_2 + 1) * sizeof(char));

	if (newstr == NULL)
	{
		return (NULL);
	}
	else
		for (; i < size_1; i++)
		{
			newstr[i] = s1[i];
		}
	for (; j < size_2; j++)
	{
		newstr[i + j] = s2[j];
	}
	newstr[i + j] = '\0';
	return (newstr);
}
