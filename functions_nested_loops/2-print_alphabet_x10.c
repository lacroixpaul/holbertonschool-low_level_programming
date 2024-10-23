#include "main.h"
#include <stdio.h>

/**
 * print_alphabet_x10 - display alphabet 10 times in lowercase.
 * Return: void.
 **/

void print_alphabet_x10(void)
{
	char lettre = 'a';
	int i = '0';

	for (i = 0 ; i <= 9 ; i++)
	{
	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
	}
}
