#include "main.h"
#include <stdio.h>

/**
 * fct_aux - verify if the input is a prime number.
 * @n : initial number.
 * @y: integer which verify if n is a prime number.
 * Return: 1 if n is a prime number, otherwise 0.
 **/

int fct_aux(int n, int y)
{
	if (n >= y)
	{
	if (n % y == 0)
	{
		return (0);
	}
	if (y * y > n)
	{
		return (1);
	}
	else if (n % y != 0)
	{
		return (fct_aux(n, y + 1));
	}
	}
return (0);
}

/**
 * is_prime_number - verify if the input is a prime number.
 * @n : initial number.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 **/

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n == 2)
	{
		return (1);
	}
	else if (n > 2)
	{
		int y = 2;

	return (fct_aux(n, y + 1));
	}
return (0);
}
