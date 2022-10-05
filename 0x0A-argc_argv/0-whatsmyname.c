#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code for ALX School students.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum, i;

	sum = 0;
	for (i = 0; i < argc; i++)
		sum = sum + atoi(argv[i]);

	printf("%s\n", argv[0]);
	return (0);
}
