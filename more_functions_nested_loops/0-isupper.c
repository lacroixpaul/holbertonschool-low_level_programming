#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * Return: 1 if c is uppercase, Return 0 otherwise.
 **/

int _isupper(int c)
{
	if (c > 64 && c < 90)
		return (1);
	else return (0);
}
