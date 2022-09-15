#include <stdio.h>
#include <unistd.h>
#include <ctype.h>
#include "main.h"
/**
 * print_sign - user defined function
 * @n: the input argument to check
 * Description: to check if a character is lower case
 *
 * Return: 0 -false and 1 - true
 */

int print_sign(int n)
{
	int res;

	if (n > 0)
	{
		res = 1;
		_putchar('+');
		return (res);
	}
	else if (n < 0)
	{
		res = -1;
		_putchar('-');
		return (res);
	}
	else
	{
		res = 0;
		_putchar('0');
		return (res);
	}
}
