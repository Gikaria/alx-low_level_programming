#include "main.h"
/**
 * print_binary - prints binary representation of a number
 * @n: number to print in binary format
 *
 */
void print_binary(unsigned long int n)
{
	unsigned int m;

	if (n > 1)
		print_binary(n >> 1);

	m = n & 1;

	_putchar(m + 48);

}
