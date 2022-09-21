#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - reverse string
 * @s: the character to be be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len, temp;

	len = strlen(s);

	for (i = 0; i < len / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = temp;
	}
}
