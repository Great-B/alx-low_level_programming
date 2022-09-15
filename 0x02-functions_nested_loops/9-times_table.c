#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * times_table - user defined function
 *
 * Description: to print lowercase alphabets 10 times
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0, j;

	while (i <= 9)
	{
		j = 0;

		while (j <= 9)
		{
			int r = i * j;

			if (r < 10)
			{
				_putchar(r + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar(r / 10 + '0');
				_putchar(r % 10 + '0');
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}

		_putchar('\n');
		i++;
	}
}

