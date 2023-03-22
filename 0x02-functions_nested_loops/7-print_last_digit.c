#include "main.h"
/**
 * print_last_digit - prints last digit of the number
 * @a: digit whose last digit will be displayed
 * Return: n the last digit
 */
int print_last_digit(int a)
{
	int n;

	n = a % 10;
	if (n < 0)
	{
		n = n * -1;
	}
	_putchar(n + '0');
	return (n);
}
