#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_to_98 - user defined function
 *@n: input argument. the starting point from which to generate to 98
 * Description: to print lowercase alphabets
 *
 * Return: void
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n > 9 || n < 0)
		{
			_putchar((n / 10) + '0');
			_putchar((n % 10) + '0');
		}
		else
		{
			_putchar(n + '0');
		}

		if (n != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n++;
	}
	_putchar('\n');
}

