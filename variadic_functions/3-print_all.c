#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_char- prints a char argument.
 * Return: nothing.
 **/

void print_char(va_list args)
{
printf("%c", va_arg(args, int));
}

/**
 * print_int- prints a int argument.
 * Return: nothing.
 **/

void print_int(va_list args)
{
printf("%d", va_arg(args, int));
}

/**
 * print_float- prints a float argument.
 * Return: nothing.
 **/

void print_float(va_list args) 
{
printf("%f", va_arg(args, double));
}

/**
 * print_string- prints a string argument.
 * Return: nothing.
 **/

void print_string(va_list args)
{
char *str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
printf("%s", str);
}

/**
 * type_specifier_t
 * @type: The type
 * @f: The function associated
 */
typedef struct type_specifier
{
char specifier;
void (*print_func)(va_list args);
}
type_specifier_t;

type_specifier_t specifiers[] = {
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
if (specifiers[j].specifier == format[i])
{
va_arg(args, int);
}
if (format[i] != '\0')
{
printf(", ");
}
i++;
while(specifiers[j].specifier != '\0')
{
j++;
}
j = 0;
}
va_end(args);
printf("\n");
}
