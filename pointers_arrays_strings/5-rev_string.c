#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string.
 * @s: string to reverse.
 **/

void rev_string(char *s)
{
int incr, size, count;
char temp;
	for (count = 0; s[count] != '\0'; count++)
	{
	}
	size = (count - 1);
	for (incr = 0; incr <= size; incr++, size--)
	{
		temp = s[incr];
		s[incr] = s[size];
		s[size] = temp;
}
}
