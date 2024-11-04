#include "main.h"
#include <stdio.h>

/**
 * _memset -  fills memory with a constant byte.
 * @s: pointer to the memory area.
 * @b: constant byte.
 * @n : number of bytes to fills.
 * Return: a pointer to the memory area s.
 **/

char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*p++ = b;
	}
	return (s);
}
