#include "variadic_functions.h"
#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * print_numbers - function that prints a number
 * @separator: string to be printed between numbers
 * @n: number of integers passed to a function
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int j;

	va_start(ap, n);
	for (j = 0; j < n; j++)
	{
		int x = va_arg(ap, int);

		printf("%d", x);
		if (separator != NULL && j != n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");
}
