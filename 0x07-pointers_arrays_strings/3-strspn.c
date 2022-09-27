#include "main.h"

/**
 * _strspn - this function return the length of a substring
 * @s: pointer to string to be scanned
 * @accept: pointer to the characters to be searched
 *
 * Description: locate character in a string
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;

	if (s == NULL || accept == NULL)
		return (len);

	while (*s && strchr(accept, *s++))
	{
		len++;
	}
	return (len);
}
