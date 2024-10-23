#include "main.h"
#include <stdio.h>

/**
 * _islower - Vérifie si un caractère est en minuscule
 * @c: Le caractère à vérifier
 *
 * Return: 1 si le caractère est en minuscule, 0 sinon
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
	return (1);
	}
	else
	{
	return (0);
}
}
