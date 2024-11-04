#include "main.h"
#include <stdio.h>

/**
 * _strspn - gets the length of a prefix substring.
 * @s: string to search.
 * @accept: list of accepted characters.
 * Return: the number of bytes accepted.
 **/

unsigned int _strspn(char *s, char *accept)
{
	int i, n = 0, j;

	for (i = 0; s[i] != '\0'; i++)
	{	
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				n++;
				break;
			}
		}	
	}
	return (n);
}
