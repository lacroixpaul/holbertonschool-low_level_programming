#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all- returns the sum of all its parameters..
 * @n : last argument.
 * Return: the sum of all its parameters.
 **/

int sum_them_all(const unsigned int n, ...)
{
int total = 0;
unsigned int i = 0;
va_list args;
va_start(args, n);

for (; i < n; i++)
{
total += va_arg(args, int);
}
va_end(args);
return (total);
}
