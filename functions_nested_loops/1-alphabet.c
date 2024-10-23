#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - display alphabet in lowercase.
 * int main point d'entrée de la fonction.
 * Return: Always 0 (Success).
 **/

void print_alphabet(void);
int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
}
