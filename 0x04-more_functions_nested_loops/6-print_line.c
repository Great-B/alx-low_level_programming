#include "main.h"
#include <ctype.h>
/**
 * print_line - this function prints out line
 * @n: the only input argument
 *
 * Description: this basically print out line
 *
 * Return: 0 (Success)
 */

void print_line(int n)
{
	if (n > 0)
	{
		while (n != 0)
		{
			_putchar('_');
			n = n - 1;
		}
	}
	_putchar('\n');
}
