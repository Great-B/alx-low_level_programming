#include "main.h"
#include <stdlib.h>

/**
 * create_array - prints buffer in hexa
 * @c: input character
 * @size: the size of the memory to print
 *
 * Return: pointer to char.
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	s = malloc((size + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	s[i] = '\0';
	return (s);
}
