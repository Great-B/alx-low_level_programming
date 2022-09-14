#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet_x10 - user defined function
 *
 * Description: to print lowercase alphabets 10 times
 *
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i <= 9)
	{
		char ch = 'a';

		while (ch <= 'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}

