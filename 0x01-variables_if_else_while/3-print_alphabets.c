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
	char chl, chu;

	chl = 'a';
	chu = 'A';

	while (chl <= 'z')
	{
		putchar(chl);
		if (chl == 'z')
		{
			while (chu <= 'Z')
			{
				putchar(chu);
				chu++;
			}
		}
		chl++;
	}
	putchar('\n');
	return (0);
}
