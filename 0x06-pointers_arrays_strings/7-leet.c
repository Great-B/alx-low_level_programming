#include "main.h"

/**
 * leet - check the code
 * @ch: an input to be converted
 *
 * Return: string
 */
char *leet(char *ch)
{
	int i, j, len, cn;

	char low[10] = {'a', 'e', 'o', 't', 'l'};
	char upper[10] = {'A', 'E', 'O', 'T', 'L'};
	char num[10] = {'4', '3', '0', '7', '1'};

	len = strlen(ch);
	cn = strlen(low);

	for (i = 0; i < len; i++)
	{
		for (j = 0; j < cn; j++)
		{

			if ((ch[i] == low[j]) || (ch[i] == upper[j]))
			{
				ch[i] = num[j];
			}
		}
	}
	return (ch);
}
