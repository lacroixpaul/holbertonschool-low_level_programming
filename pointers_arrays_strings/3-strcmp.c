#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings.
 * @s1: first string to compare.
 * @s2 : second string to compare.
 * Return: -1 if s1 < s2, 0 if s1 == s2 and 1 if s1 > s2.
 **/

int _strcmp(char *s1, char *s2)
{
int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
