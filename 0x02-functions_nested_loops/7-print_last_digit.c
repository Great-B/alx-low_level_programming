#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * print_last_digit - user defined function
 * @n: the input argument to the function. its a number
 * Description: to print lowercase alphabets
 *
 * Return: void
 */

int print_last_digit(int n)
{
	int r;

	r = n % 10;
	r = abs(r);
	return (r);
}
