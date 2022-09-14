#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Description: 'the program's description'
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char input[] = "_putchar\n";
	char *s;

	s = input;
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}

	return (0);
}
