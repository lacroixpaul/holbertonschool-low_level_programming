#include "main.h"
#include <stdio.h>

/**
 * leet - encodes a string into 1337.
 *@s: string to convert.
 *Return: the converted string.
 **/

char *leet(char *s)
{
int i, j;
char letters[] = "aAeEoOtTlL";
char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			s[i] = leet[j];
		}
	}
	return (s);
}
