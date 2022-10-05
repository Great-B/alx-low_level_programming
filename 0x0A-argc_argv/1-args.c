#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - check the code for ALX School students.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	_putchar((argc - 1) + '0');
	for (i = 0; i < argc; i++)
	{
		sum += atoi(argv[i]);
	}
	_putchar('\n');
	return (0);
}
