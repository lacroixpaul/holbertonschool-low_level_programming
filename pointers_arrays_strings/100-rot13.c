#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string into rot13.
 *@s: string to convert.
 *Return: the converted string.
 **/

char *rot13(char *s)
{
int i, j;
char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}
