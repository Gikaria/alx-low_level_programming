#include "main.h"

/**
 * flip_bits - A function that returns number of bits from
 * fliping two integer numbers
 * @n: first integer
 * @m: second integer
 *
 * Return: number of bits after flipping two integers
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int cnt = 0;
	int a, b;

	while (n > 0 || m > 0)
	{
		a = (n & 1);
		b = (m & 1);

		if (a != b)
			cnt++;

		n >>= 1;
		m >>= 1;
	}
	return (cnt);
}
