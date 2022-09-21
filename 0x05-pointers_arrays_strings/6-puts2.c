#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - this outputs characters and strings
 * @str: the character to be display
 *
 * Return: void
 */
void puts2(char *str)
{
	size_t i = 0;
	size_t len = strlen(str);

	for (; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
