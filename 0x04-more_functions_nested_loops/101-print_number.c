#include "main.h"
/**
 * print_number - prints numbers
 * @n: number to be printed
 * Return: 0 success
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar(45);
		n = -n;
	}
	if ((n / 10) > 0)
	{
		print_number(n / 10);
	}
	_putchar((n % 10) + '0');
}
