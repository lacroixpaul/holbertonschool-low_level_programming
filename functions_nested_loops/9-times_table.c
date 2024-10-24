#include "main.h"
#include <stdio.h>

/**
 * times_table - prints the 9 times table, starting with 0.
 * @mult1: premier multiplicateur.
 * @mult2: second multiplicateur.
 */

void times_table(int mult1, int mult2)
{
{
	for (mult1 = 0; mult1 < 10; mult1++)
	{
		for (mult2 = 0; mult2 < 10; mult2++)
		{
			int result = mult1 * mult2, a = (result / 10), b = (result % 10);
			{
			if (mult2 == 0)
		{
				_putchar(result + '0');
				_putchar(',');
		}
		else if (mult2 == 9 && result < 10)
		{
			_putchar(' ');
			_putchar(result + '0');
			_putchar('\n');
		}
		else if (mult2 == 9 && result > 10)
		{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar('\n');
		}
		else if (result < 10)
		{
			_putchar(' ')
			_putchar(result + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
		_putchar(a + '0');
		_putchar(b + '0');
		_putchar(',');
		_putchar(' ');
}}}}}}
