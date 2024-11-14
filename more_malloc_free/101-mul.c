#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - pmultiplies two numbers.
 * @argc : number of argument.
 * @argv : array containing argument.
 * Return: 0 if sucess otherwise 1.
 **/

int main(int argc, char *argv[])
{
	if (argc != 3 || (atoi(argv[1])) < 0 || (atoi(argv[2])) < 0)
	{
		printf("Error\n");
		exit(98);
	}
	if (argc == 3)
	{
		printf("%d\n", (atoi(argv[1]) * atoi(argv[2])));
	}
return (0);
}
