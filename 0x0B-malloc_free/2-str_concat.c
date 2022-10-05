#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - pointer to concatenated string
 * @s1: pointer to source string
 * @s2: pointer to destination string
 *
 * Return: pointer to output string.
 */
char *str_concat(char *s1, char *s2)
{
	char *final;
	int len;

	len = strlen(s1) + strlen(s2) + 1;
	final = malloc(len * sizeof(char));
	if (final == NULL)
	{
		return (NULL);
	}
	final[0] = 0;
	strcat(final, s1);
	strcat(final, s2);
	return (final);
}
