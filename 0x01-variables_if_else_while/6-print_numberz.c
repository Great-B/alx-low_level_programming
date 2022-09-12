#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always;
 */
int main(void)
{
	int ch;

	ch = 0;

	while (ch <= 9)
	{
		char output = ch+'0';
		putchar(output);
		ch++;
	}
	putchar('\n');
	return (0);
}
