#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char- prints a char argument.
 * @args: argument.
 * Return: nothing.
 **/

void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int- prints a int argument.
 * @args: argument.
 * Return: nothing.
 **/

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float- prints a float argument.
 * @args: argument.
 * Return: nothing.
 **/

void print_float(va_list args)
{
printf("%f", va_arg(args, double));
}

/**
 * print_string- prints a string argument.
 * @args: argument.
 * Return: nothing.
 **/

void print_string(va_list args)
{
char *str = va_arg(args, char *);
printf("%s", str);
}

/**
 * type_specifier_t: structure.
 * @specifier: The type.
 * @f: The function associated.
 */

type_specifier_t specifiers[] =
{
{'c', print_char},
{'i', print_int},
{'f', print_float},
{'s', print_string},
{'\0', NULL}
};

/**
 * print_all- prints anything, followed by a new line.
 * @format : list of types of arguments passed to the function.
 * Return: nothing.
 **/

void print_all(const char * const format, ...)
{
unsigned int i = 0, j = 0;
va_list args;
va_start(args, format);

while (format[i] != '\0')
{
j = 0;
while (specifiers[j].specifier != '\0')
{
if (format[i] == specifiers[j].specifier)
{
specifiers[j].print_func(args);
if (format[i + 1] != '\0')
{
printf(", ");
}
break;
}
j++;
}
i++;
}
va_end(args);
printf("\n");
}
