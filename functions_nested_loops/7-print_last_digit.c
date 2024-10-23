#include "main.h"
#include <stdio.h>

/**
 * print_last_digit -  prints the last digit of a number.
 * @number: L'entier dont on veut trouver le dernier digit. *
 * @lastdigit: dernier digit en fonction de number.
 * Return: return last digit.
 */

int print_last_digit(int number, int lastdigit)

{
lastdigit = number % 10;
return (lastdigit);
}
