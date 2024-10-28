#include <stdlib.h>
#include <stdio.h>

/**
 * main-  t prints the numbers from 1 to 100.
 * Return: 0 if success.
 **/

int main(void)
{
	int i = 0;

	for (i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0 && i != 100)
			printf("FizzBuzz ");
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0 && i != 100)
			printf("Buzz ");
		if (i == 100)
			printf("Buzz");
		else if (i % 3 != 0 && i % 5 != 0)
		printf("%d ", i);
}
		return (0);
}
