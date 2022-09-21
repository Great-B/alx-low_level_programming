#include "main.h"

/**
 * swap_int - swap one int value for the other8
 * @a: first value to be changed
 * @b: second value to be changed
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int m = *a;
	int n = *b;

	*a = n;
	*b = m;
}
