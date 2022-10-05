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
	int sum = 0, i;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (isdigit(atoi(argv[i])) == 0)
			{
				sum = sum + atoi(argv[i]);
			}
			else if (isdigit(atoi(argv[i])) == 1)
			{
				printf("Errpr\n");
				return (1);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	else
	{
		printf("%d\n", 0);
	}
	return (0);
}
