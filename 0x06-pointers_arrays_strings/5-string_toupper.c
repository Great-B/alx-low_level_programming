#include "main.h"

/**
 * string_toupper - check the code
 * @ch: an input to be converted
 *
 * Return: nothing
 */
char *string_toupper(char *ch)
{
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		if (ch[i] >= 'a' && ch[i] <= 'z')
		{
			ch[i] = ch[i] - 32;
		}
	}
	return (ch);
}
