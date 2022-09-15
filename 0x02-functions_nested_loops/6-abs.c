#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include <stdlib.h>
#include "main.h"
/**
 * _abs - user defined function
 * @j: the input argument to check
 * Description: to check if a character is lower case
 *
 * Return: 0 -false and 1 - true
 */

int _abs(int j)
{
	int res;

	res = abs(j);
	return (res);
}

