#include <stdlib.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - Entry point.
 * Display a string based on a random number.
 * Return: Always 0 (Success).
 **/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
{
	printf("is positive\n");
}
	else if (n < 0)
{
	printf("is negative\n");
}
	else
{
	printf("is zero\n");
}
	return (0);
}
