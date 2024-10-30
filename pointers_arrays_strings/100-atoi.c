#include "main.h"
#include <stdio.h>

/**
 * _atoi - convert a string to an integer.
 * @s : string to convert.
 * Return: 0 if sucess.
 **/

int _atoi(char *s)
{
int n = 0;
int num = 0;
int i;
int sign = 1;

	if (s[0] == '-')
	{
	sign = -1;
	i = 1;
	while (s[i] == '-')
		{ i++; }
	}
	else
	{
		i = 0;
	}
	while (s[n] != '\0')
	{
		n++;
	}
		for (; i < n; i++)
		{
			if (s[i] >= '0' && s[i] <= '9')
			num = num * 10 + (s[i] - 48);
		}
	num *= sign;
	return (0);
}
