#include <stdarg.h>
/**
 * sum_them_all - this function add all integer
 * @n: first input
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int sum = 0;

	if (n == (unsigned int)0)
	{
		return (0);
	}
	else
	{
		va_start(ap, n);
		for (i = 0; i < n; i++)
		{
			sum += va_arg(ap, int);
		}
		va_end(ap);
		return (sum);
	}
}
