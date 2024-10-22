#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Display all the numbers of base 16 in lowercase.
 * Return: Always 0 (Success).
 **/

int main(void)
{
	int d;
	char c;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
	putchar(c);
	}
	putchar('\n');
	return (0);
}
