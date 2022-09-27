#include "main.h"

/**
 * _strpbrk - this function return pointer to a character
 * @s: pointer to string to be scanned
 * @accept: pointer to the characters to be searched
 *
 * Description: locate character in a string
 * Return: string
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
		return (NULL);

	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
