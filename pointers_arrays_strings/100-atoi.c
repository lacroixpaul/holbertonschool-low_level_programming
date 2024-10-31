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
int sign = 1;

	while (s[n] != '\0')
	{
		n++;
		if  (s[n] == '-')
		{
			sign = -sign;
		}
		else if (s[n] >= '0' && s[n] <= '9')
		{
			break;
		}
	}
		for (; s[n] < '\0'; n++)
		{
			if (s[n] >= '0' && s[n] <= '9')
			{
				num = num * 10 + (s[n] - 48);
			}
			else
			{
			return (0);
			}
		}
	return (num * sign);
}
