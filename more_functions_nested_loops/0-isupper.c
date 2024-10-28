#include "main.h"
#include <stdio.h>

/**
 * _isupper - checks for uppercase character.
 * @c: tested charactere.
 * Return: 1 if c is uppercase, Return 0 otherwise.
 **/

int _isupper(int c)
{
	if (c > 64 && c < 91)
		return (1);
	else
		return (0);
}
