#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <string.h>

/**
* main- performs operation.
* @argc: number of argument.
* @argv : differents arguments.
* Return: result or 98,99 or 100 in case of error.
**/

int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0, result = 0;
	char operator;
	char *operator_cmp;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = argv[2][0];
	operator_cmp = "+*-/%";

	if (strchr(operator_cmp, operator) == NULL)
	{
	printf("Error\n");
	exit(100);
	}
	if ((num2 == 0) && (operator == '/' || operator == '%'))
		{
		printf("Error\n");
		exit(100);
		}
	operation = get_op_func(argv[2]);
	result = operation(num1, num2);
	printf("%d\n", result);
return (0);
}
