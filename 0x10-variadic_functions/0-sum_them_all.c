#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns sum of all parameters
 * @n: number of arguments
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum  = 0;
	unsigned int i;
	va_list arg;

	va_start(arg, n);
	if (n == 0)
	{
		return (0);
	}
	for (i = 0; i < n; i++)
	{
		sum += va_arg(arg, int);
	}
	va_end(arg);

	return (sum);
}
