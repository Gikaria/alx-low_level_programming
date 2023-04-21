#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - A function thta prints strings
 * @separator:string to be printed between strings
 * @n:Number of strings passed to a function
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		char *c = va_arg(args, char *);

		if (c == NULL)
		{
			printf("(nil), ");
		}
		printf("%s", c);
		if ((separator != NULL) && (i != n - 1))
		{
			printf("%s", separator);
		}
	}
	va_end(args);
	printf("\n");
}
