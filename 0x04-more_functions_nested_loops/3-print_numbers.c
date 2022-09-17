#include "main.h"
#include <ctype.h>
/**
 * print_numbers - this function prints out numbers
 *
 * Description: this basically print out numbers
 *
 * Return: 0 (Success)
 */

void print_numbers(void)
{
	char ch = '0';

	while (ch <= '9')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
