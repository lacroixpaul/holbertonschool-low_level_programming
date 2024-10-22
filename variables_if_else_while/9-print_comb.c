#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Display all single digit numbers of base 10 starting from 0.
 * Return: Always 0 (Success).
 **/

int main(void)
{
	int d;

	for (d = '0'; d <= '9'; d++)
	{
	putchar(d);
	putchar(',');
	putchar(' ');
	}
	putchar('\n');
	return (0);
}
