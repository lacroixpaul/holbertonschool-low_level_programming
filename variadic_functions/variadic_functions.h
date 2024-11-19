#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);

typedef struct type_specifier
{
char specifier;
void (*print_func)(va_list args);
}
type_specifier_t;

void print_float(va_list args);
void print_char(va_list args);
void print_int(va_list args);
void print_string(va_list args);
void print_all(const char * const format, ...);

#endif
