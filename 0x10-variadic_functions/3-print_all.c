#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints all data types
 * @format: conversion specifiers of arguments
 *
 */
void print_all(const char *format, ...)
{
	va_list ap;
	unsigned int i = 0, flag = 0;
	char *s;

	va_start(ap, format);

	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(ap, int));
				flag = 1;
				break;
			case 'i':
				printf("%d",  va_arg(ap, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(ap, double));
				flag = 1;
				break;
			case 's':
				s = va_arg(ap, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				flag = 1;
				break;
			default:
				flag = 0;
				break;
		}
		i++;
		if (format[i] != '\0' && flag)
			printf(", ");
	}
	printf("\n");
	va_end(ap);
}
