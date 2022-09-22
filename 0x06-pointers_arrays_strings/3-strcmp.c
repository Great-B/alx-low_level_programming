#include "main.h"

/**
 * _strcmp - this function compare strings
 * @s1: the first string to be compared
 * @s2: the second string to be compared
 *
 * Description: strings concatenation
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int status = 0;

	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	/* check for character mismatch */
	status = (*s1 == *s2) ? 0 : (*s1 > *s2) ? 15 : -15;
	return (status);
}
