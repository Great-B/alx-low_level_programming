#include "main.h"

/**
 * _strncat - this function concatenate strings
 * @dest: the destination point
 * @src: the source point
 * @n: the position of src
 *
 * Description: strings concatenation
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	/*mark the point of ptc in the dest string */
	char *ptc = dest + strlen(dest);

	/* locate the terminal point for dest */
	while (*src != '\0' && n--)
	{
		*ptc++ = *src++;
	}

	*ptc = '\0';
	return (dest);
}
