#include "main.h"
#include <ctype.h>
/**
 * _isupper - this function check if a char is upper case or not
 * @c: the input argument
 * Description: to check if a character is upper case or not
 *
 * Return: 0 - false and 1-true
 */

int _isupper(char c)
{
	int res;

	if (isupper(c))
	{
		res = 1;
		return (res);
	}
	else
	{
		res = 0;
		return (res);
	}
}
