#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers- prints numbers, followed by a new line.
 * @separator : separator between number.
 * @n : last argument.
 * Return: nothing.
 **/

void print_numbers(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
va_start(args, n);

for (; i < n; i++)
{
printf("%d ", va_arg(args, int));
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
