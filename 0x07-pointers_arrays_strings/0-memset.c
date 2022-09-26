#include "main.h"

/**
 * _memset - this function fills memory with a constant bype
 * @s: pointer to the destination object
 * @b: value to be filled
 * @n: number of bytes to be filled
 *
 * Description: strings concatenation
 * Return: string
 */
char *_memset(char *s, char b,  unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = b;
	}
	return (s);
}
