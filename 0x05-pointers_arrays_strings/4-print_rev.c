#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - this outputs characters and strings
 * @s: the character to be display
 *
 * Return: void
 */
void print_rev(char *s)
{
	char temp;
	char *i = s;
	
	char *j = s + strlen(s);
	if (j > i)
	{
		j--;
	}

	while (i < j)
	{
		temp = *i;
		*i = *j;
		*j = temp;
		i++;
		j--;

	}
}
