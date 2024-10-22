#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point.
 * Display a string based on a random number.
 * Return: Always 0 (Success).
 **/

int main(void)
{
	int n;
	int lastdgt;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdgt = (n % 10);

	if (lastdgt > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdgt);
}
	else if (lastdgt == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lastdgt);
}
	else
{
	printf("Last digit of %d is %d  and is less than 6 and not 0\n", n, lastdgt);
}
	return (0);
}
