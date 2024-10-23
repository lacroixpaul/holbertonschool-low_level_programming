#include "main.h"
#include <stdio.h>

/**
 * print_last_digit -  prints the last digit of a number.
 * @n: L'entier dont on veut trouver le dernier digit. *
 * Return: return last digit.
 */

int print_last_digit(int n)

{
int lastdigit = n % 10;
	if (n < 0)
	{
		return (-lastdigit);
	}
	else
	{
		return (lastdigit);
	}
}
