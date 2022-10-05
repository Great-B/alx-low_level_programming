#include "main.h"
#include <stdlib.h>

/**
 * _strdup - prints buffer in hexa
 * @str: pointer to char
 *
 * Return: pointer to char.
 */
char *_strdup(char *str)
{
	char *s, *l;
	int len;

	len = 0;
	while (str[len])
		len++;
	s = malloc(len + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	l = s;
	while (*str)
	{
		*l++ = *str++;
	}
	*l = '\0';
	return (s);
}
