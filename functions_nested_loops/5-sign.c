#include "main.h"
#include <stdio.h>

/**
 * print_sign - affiche le signe du nombre
 *
 * @n: Le caractère à vérifier
 *
 * Return: 1 -1 ou 0 si le nombre est positif négatif ou égal à 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
	return (1);
	}

	else if (n == 0)
	{
	_putchar('0');
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
	return (0);
	}
	else if (n < 0)
	{
	_putchar('-');
	_putchar(',');
	_putchar(' ');
	_putchar('\n');
	return (-1);
}
}
