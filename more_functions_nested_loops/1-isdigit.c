#include "main.h"
#include <stdio.h>

/**
 * _isdigit - checks for digit.
 * @c: tested charactere.
 * Return: 1 if c is digit, Return 0 otherwise.
 **/

int _isdigit(int c)
{
	if (c > 47 && c < 58)
		return (1);
	else
		return (0);
}
