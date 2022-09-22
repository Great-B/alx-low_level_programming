#include "main.h"
#include <stddef.h>

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
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i++] = '\0';
	}
	return (dest);
}
