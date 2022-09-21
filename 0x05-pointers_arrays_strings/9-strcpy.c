#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * _strcpy- this functon copy strings
 * @dest: final data
 * @src: origin data
 *
 * Description: copy of strings
 * Return: char
 */
char *_strcpy(char *dest, char *src)
{
	int k;

	k = 0;

	if (src == NULL || dest == NULL)
	{
		return (NULL);
	}
	while src[k] != '\0')
	{
		dest[k] = src[k];
		k++;
	}
	dest[k] = '\0';
	return (dest);
}
