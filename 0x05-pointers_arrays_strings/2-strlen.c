#include "main.h"

/**
 * _strlen - calculate the length of a string
 * @s: the character who whose length is to be calculated
 *
 * Return: integer value for length
 */
int _strlen(char *s)
{
	int i, len;

	len = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}
