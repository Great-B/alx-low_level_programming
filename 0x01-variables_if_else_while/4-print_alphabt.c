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
	char chl = 'a';

	while (chl <= 'z')
	{
		if (chl == 'q')
		{
			chl++;
			continue;
		}
		else if (chl == 'e')
		{
			chl++;
			continue;
		}
		else
		{
			putchar(chl);
		}
		chl++;
	}
	putchar('\n');
	return (0);
}
