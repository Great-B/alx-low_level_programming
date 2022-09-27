#include "main.h"

/**
 * compare - this function return pointer to a character
 * @X: pointer to string to be scanned
 * @Y: pointer to the characters to be searched
 *
 * Description: locate character in a string
 * Return: string
 */
int compare(const char *X, const char *Y)
{
	while (*X && *Y)
	{
		if (*X != *Y)
		{
			return (0);
		}
		X++;
		Y++;
	}
	return (*Y == '\0');
}

/**
 * _strstr - this function return pointer to a character
 * @haystack: pointer to string to be scanned
 * @needle: pointer to the characters to be searched
 *
 * Description: locate character in a string
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && compare(haystack, needle))
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
