#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * mincoins - get minimum change func
 * @coins: array of coins options
 * @m: size of coin array
 * @V: user input
 *
 * Return: integer
 */
int mincoins(int coins[], int m, int V)
{
	int res, i, sub_res;

	if (V == 0)
		return (0);

	res = INT_MAX;

	for (i = 0; i < m; i++)
	{
		if (coins[i] <= V)
		{
			sub_res = mincoins(coins, m, V - coins[i]);
			if (sub_res != INT_MAX && sub_res + 1 < res)
				res = sub_res + 1;
		}
	}
	return (res);
}
/**
 * main - check the code for ALX School students.
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum = 0, m;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc == 2)
	{
		if (atoi(argv[1]) < 0)
		{
			printf("%d\n", 0);
		}
		else
		{
			m = sizeof(coins) / sizeof(coins[0]);
			sum = mincoins(coins, m, atoi(argv[1]));
			printf("%d\n", sum);
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
