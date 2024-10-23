#include "main.h"
#include <stdio.h>

/**
 * print_alphabet - display alphabet in lowercase.
 * Return: Always 0 (Success).
 **/

void print_alphabet(void);
void print_alphabet(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
}
