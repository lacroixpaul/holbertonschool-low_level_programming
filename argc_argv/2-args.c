#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints all arguments it receives.
 * @argc : number of argument.
 * @argv : array containing argument.
 * Return: 0.
 **/

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
return (0);
}
