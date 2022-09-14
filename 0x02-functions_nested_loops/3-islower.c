#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * _islower - user defined function
 *
 * Description: to check if a character is lower case
 *
 * Return: 0 -false and 1 - true
 */

int _islower(int c)
{
	int res;

	if(islower(c))
	{
		res = 1;
		return res;
	}
	else
	{
		res = 0;
		return res;
	}
}

