#include "main.h"
#include <ctype.h>
/**
 * more_numbers - this function prints out numbers
 *
 * Description: this basically print out numbers
 *
 * Return: 0 (Success)
 */

void more_numbers(void)
{
	int c = 0;
	int n = 0;

	while (c <= 9)
	{
		while (n <= 14)
		{
			if (n > 9)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			}
			else
			{
				_putchar(n + '0');
			}
			n = n + 1;
		}
		c = c + 1;
	}
	_putchar('\n');
}
