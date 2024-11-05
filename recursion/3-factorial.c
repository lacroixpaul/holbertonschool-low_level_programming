#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number.
 * @n : initial number.
 * Return: the factorial result or -1 if n est inférieur à 0.
 **/

int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n - 1));
	}
	else if (n == 0)
	{
		return (1);
	}

return (-1);
}
