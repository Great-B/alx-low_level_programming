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
	char alpha;

	ch = 0;
	alpha = 'a';

	while (ch <= 15)
	{
		if ((ch > 9) && (alpha <= 'f') && (ch <= 15))
		{
			putchar(alpha);
			alpha++;
			ch++;
		}
		else
		{
			putchar(ch + '0');
			ch++;
		}
	}
	putchar('\n');
	return (0);
}
