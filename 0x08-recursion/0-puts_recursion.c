#include "main.h"

/**
 * _puts_recursion - this function print a string followed by new line
 * @s: pointer to the destination object
 *
 * Description: strings concatenation
 * Return: string
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		_putchar(s[i]);
		i++;
	}
	_putchar('\n');
}
