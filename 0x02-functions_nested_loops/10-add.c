#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "main.h"

/**
 * add - a user defined function.
 * @a: the first input argument
 * @b: the input argument to the function.
 *
 * Description: to sum two number
 *for the function to operate.
 *
 * Return: int
 */
int add(int a, int b)
{
	int r;

	r = a + b;
	return (r);
}
