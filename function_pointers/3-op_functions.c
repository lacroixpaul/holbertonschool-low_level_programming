#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
* op_add- add two integers.
* @a: first integer.
* @b: second integer.
* Return: the sum of a and b.
**/

int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub- soustract two integers.
* @a: first integer.
* @b: second integer.
* Return: the difference of a and b.
**/

int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul- multiply two integers.
* @a: first integer.
* @b: second integer.
* Return: the product of a and b.
**/

int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div- divises two integers.
* @a: first integer.
* @b: second integer.
* Return: the result of a divided by b.
**/

int op_div(int a, int b)
{
	if (b != 0)
	{
		return (a / b);
	}
	printf("Error\n");
	exit(100);
}

/**
 * op_mod- returns the remainder of the division of two integers.
 * @a: first integer.
 * @b: second integer.
 * Return: remainder of the division of a by b.
 **/

int op_mod(int a, int b)
{
	if (b != 0)
	{
		return (a % b);
	}
	printf("Error\n");
	exit(100);
}
