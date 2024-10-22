#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Display alphabet lowercase execpt q and e.
 * Return: Always 0 (Success).
 **/

int main(void)
{
	char lettre;

	for (lettre = 'a'; lettre <= 'z'; lettre++)
	{
		if (lettre != 'e')
			if (lettre != 'q')
		putchar(lettre);
	}
	putchar('\n');
	return (0);
}
