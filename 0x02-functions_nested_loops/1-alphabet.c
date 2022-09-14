#include <stdio.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - user defined function
 *
 * Description: to print lowercase alphabets
 *
 * Return: void
 */

void print_alphabet(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}

