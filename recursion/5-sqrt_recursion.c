#include "main.h"
#include <stdio.h>

/**
 * fct_aux - returns the natural square root of a number.
 * @n : initial number.
 * @y: integer which searches for the square root.
 * Return: the result or -1 if n does not have a natural square root.
 **/

int fct_aux(int n, int y)
{
	if (y * y == n)
	{
		return (y);
	}
	else if (y * y > n)
	{
		return (-1);
	}
	else
	{
		return (fct_aux(n, y + 1));
	}
return (-1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n : initial number.
 * Return: the result or -1 if n does not have a natural square root.
 **/

int _sqrt_recursion(int n)
{

	if (n == 0 || n == 1)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		int y = 1;

		return (fct_aux(n, y));
	}
return (-1);
}
