#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts_half - this outputs characters and strings
 * @str: the character to be display
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len, midpoint, i, j;
	char rearHalf[50];

	len = strlen(str);
	midpoint = len / 2;

	for (i = midpoint, j = 0; i <= len; i++, j++)
	{
		rearHalf[j] = str[i];
	}
	_putchar('\n');
}
