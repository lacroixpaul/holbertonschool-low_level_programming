#include <stdlib.h>
#include <stdio.h>

/**
 * main-  t prints the numbers from 1 to 100.
 **/

void main(void)
{
	for (int i = 1; i < 101; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0)
			printf("Buzz ");
		else if (i % 3 != 0 && i % 5 != 0)
		printf("%d ", i);
}
}
