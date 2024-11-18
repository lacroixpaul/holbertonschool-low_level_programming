#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
* print_name- print a name.
* @name: pointer to a string of characters.
* @f: pointer of a function.
**/

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
