#include "main.h"

/**
 * _strchr - this function locate a character in a string
 * @s: pointer to the string object
 * @c: character to locate
 *
 * Description: locate character in a string
 * Return: string
 */
char *_strchr(char *s, char c)
{
	char *p = NULL;

	while ((*s != (char)c) && (*s != '\0'))
	{
		p = ++s;
	}
	return (p);
}
