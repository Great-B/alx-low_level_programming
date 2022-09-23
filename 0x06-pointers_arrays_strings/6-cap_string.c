#include "main.h"

/**
 * cap_string - check the code
 * @ch: an input to be converted
 *
 * Return: nothing
 */
char *cap_string(char *ch)
{
	int i, len;

	len = strlen(ch);

	for (i = 0; i < len; i++)
	{
		if (isalpha(ch[i]) && ch[i - 1] == ' ')
		{
			ch[i] = toupper(ch[i]);
		}
	}
	return (ch);
}
