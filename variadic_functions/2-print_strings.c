#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings- prints strings, followed by a new line.
 * @separator : separator between string.
 * @n : number of string.
 * Return: nothing.
 **/

void print_strings(const char *separator, const unsigned int n, ...)
{
unsigned int i = 0;
va_list args;
va_start(args, n);

for (; i < n; i++)
{
char *str = va_arg(args, char *);
if (str == NULL)
{
printf("(nil)");
}
else
printf("%s", str);
if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}
va_end(args);
printf("\n");
}
