#include "main.h"
#include <stdio.h>

/**
 * _puts - this outputs characters and strings
 * @str: the character to be display
 *
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;

	}
	_putchar('\n');
}
