#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string.
 * @s : string to prints.
 * Return: length of a string.
 **/

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
			if (*s == '\0')
			{
				_putchar('\n');
			}
	}
return (0);
}
