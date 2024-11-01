#include "main.h"
#include <stdio.h>

/**
 * cap_string - capitalizes all words of a string.
 *@str: string to convert.
 *Return: the converted string.
 **/

char *cap_string(char *str)
{
int i;
int j;
char separateur[] = " \t\n,;.!?\"(){}";

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if (str[i] >= 'a' && str[i] <= 'z')
			{
				str[i] = str[i] - 32;
			}
			continue;
		}
	for (j = 0; separateur[j] != '\0'; j++)
	{
		if (str[i] == separateur[j])
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
			break;
		}
	}
	}
	return (str);
}
