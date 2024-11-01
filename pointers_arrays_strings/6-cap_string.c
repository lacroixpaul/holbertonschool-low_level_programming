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
	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0)
		{
			if ((str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
				continue;
		}
		 if (str[i] == ' ' || '\t' || '\n' || ',' || ';' || '.' || '!' || '?' || '"' || '(' || ')' || '{' || '}' )
		{
			 i++
				 if (str[i] >= 'a' && str[i] <= 'z')
				{
					str[i] = str[i] - 32;
					continue;
				}
		}
	}
	return (str);
}
