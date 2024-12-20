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
	return (1);
	_putchar('\n');
	}

	else if (n == 0)
	{
	_putchar('0');
	return (0);
	_putchar('\n');
	}
	else
	{
	_putchar('-');
	return (-1);
	_putchar('\n');
}
}
