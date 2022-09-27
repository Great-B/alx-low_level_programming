#include "main.h"

/**
 * _memcpy - this function copy memory area
 * @dest: pointer to the destination object
 * @src: pointer to the source object
 * @n: number of bytes to copy
 *
 * Description: strings concatenation
 * Return: string
 */
char *_memcpy(char *dest, char *src,  unsigned int n)
{
	char *p = dest;
	char *q = src;

	if ((p != NULL) && (q != NULL))
	{
		while (n)
		{
			*p++ = *q++;
			--n;
		}
	}
	return (dest);
}
