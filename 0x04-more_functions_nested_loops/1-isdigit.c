#include "main.h"
#include <ctype.h>
/**
 * _isdigit - this function check if an input is a digit or not
 * @c: the input argument
 * Description: to check if a character is upper case or not
 *
 * Return: 0 - false and 1-true
 */

int _isdigit(int c)
{
	int res;

	if (isdigit(c))
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
