#include "main.h"

/**
 * _strcat - this function concatenate strings
 * @dest: the destination point
 * @src: the source point
 *
 * Description: strings concatenation
 * Return: string
 */
char *_strcat(char *dest, char *src)
{
	char *origin;

	/* check if both dest and src are */
	if (src == NULL && dest == NULL)
	{
		return (NULL);
	}

	/* make a copy of dest */
	origin = dest;

	/* locate the terminal point for dest */
	while (*origin != '\0')
	{
		origin++;
	}

	/* this is where joining of characters take place */
	while (*src != '\0')
	{
		*origin++ = *src++;
	}

	*origin = '\0';
	return (dest);
}
