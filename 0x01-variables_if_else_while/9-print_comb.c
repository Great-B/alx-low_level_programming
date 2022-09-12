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
	char ch;

	ch = '0';

	while (ch <= '9')
	{
		
		putchar(ch);
		if (ch != '9')
		{
			putchar(',');
			putchar(' ');
		}
		ch++;		
	}
	putchar('\n');
	return (0);
}
