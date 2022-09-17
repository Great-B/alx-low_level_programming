#include "main.h"
#include <ctype.h>
/**
 * print_diagonal - this function prints out diagonal
 * @n: the only input argument
 *
 * Description: this basically print out diagonal
 *
 * Return: 0 (Success)
 */

void print_diagonal(int n)
{
	int m = n - 1;

	if (n > 0)
	{
		while (n > 0)
		{
			while (m <= 0)
			{
				_putchar(' ');
				m = m + 1;
			}
			_putchar('\\');
			_putchar('\n');
			n = n - 1;
		}
	}
	_putchar('\n');
}
