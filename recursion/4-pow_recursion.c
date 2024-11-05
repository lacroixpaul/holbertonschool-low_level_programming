#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x raised to the power of y.
 * @x : initial number.
 * @y : number of the power.
 * Return: the result or -1 if y est inférieur à 0.
 **/

int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
return (-1);
}
