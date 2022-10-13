#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - this function add all integer
 * @n: first input
 *
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list apptr;
	
	if (n != 0)
	{
		while (separator)
		{
			printf("%s", separator);
			separator = va_arg(apptr, const char *);
		}
		va_end(apptr);
	}
	printf("\n");
}
