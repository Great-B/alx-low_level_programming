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

	if (s != NULL)
	{
		do
		{
			if (*s == (char)c)
			{
				p = s;
				break;
			}
		}
		while (*s++);
	}
	return (p);
}
