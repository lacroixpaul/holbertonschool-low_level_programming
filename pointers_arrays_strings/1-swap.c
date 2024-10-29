#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a: first integer to swap.
 * @b: second integer to swape.
 * Return: void.
 **/

void swap_int(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
