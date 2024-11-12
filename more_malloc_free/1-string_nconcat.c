#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings.
 * @s1 : first string.
 * @s2 : string to add.
 * @n : number of bytes maximum to add.
 * Return: a pointer.
 **/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int size_1 = 0, i = 0;
	unsigned int size_2 = 0, j = 0;
	char *newstr;

	if (s1 != 0)
	{
		while (s1[size_1] != '\0') 
		{
			size_1++;
		{
		}
	}
	}
	if (s2 != 0)
	{	
		while (s2[size_2] != '\0' && size_2 < n)
		{
			size_2++;
		}
	}
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
