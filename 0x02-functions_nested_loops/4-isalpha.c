#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _isalpha - user defined function
 * @c: the input argument to check
 * Description: to check if a character is lower case
 *
 * Return: 0 -false and 1 - true
 */

int _isalpha(int c)
{
	int res;

	if (isalpha(c))
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
