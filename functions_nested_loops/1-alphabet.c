#include "main.h"
#include <stdio.h>

/**
 * main - Entry point.
 * Display alphabet in lowercase.
 * Return: Always 0 (Success).
 **/
void print_alphabet(void);
char main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		_putchar(lettre);
	}
	_putchar('\n');
	return (0);
}
