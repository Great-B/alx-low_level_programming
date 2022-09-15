#include "main.h"

/**
 * main - Entry point
 *
 * Description: the program routine
 *
 * Return: Always Success(0);
 */
int main(void)
{
	int n;

	n = add(89, 9);
	if (n > 9)
	{
		_putchar((n / 10) + '0');
		_putchar((n % 10) + '0');
	}
	else
	{
		_putchar(n + '0');
	}
	_putchar('\n');
	return (0);
}

