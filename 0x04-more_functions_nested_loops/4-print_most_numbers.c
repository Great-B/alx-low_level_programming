#include "main.h"
#include <ctype.h>
/**
 * print_most_numbers - this function prints out numbers
 *
 * Description: this basically print out numbers
 *
 * Return: 0 (Success)
 */

void print_most_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		if (ch == '2' || ch == '4')
		{
			ch++;
			continue;
		}
		else
		{
			_putchar(ch);
			ch++;
		}
	}
	_putchar('\n');
}
