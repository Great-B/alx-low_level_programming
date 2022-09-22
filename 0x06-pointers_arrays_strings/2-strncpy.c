#include "main.h"

/**
 * _strncpy - this function concatenate strings
 * @dest: the destination point
 * @src: the source point
 * @n: the position of src
 *
 * Description: strings concatenation
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptc;

	/* check if dest has memory allocated */
	if (dest == NULL)
	{
		return (NULL);
	}

	/* assign a pointer to the starting point of dest */
	ptc = dest;

	/* locate the terminal point for dest */
	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptc);
}
