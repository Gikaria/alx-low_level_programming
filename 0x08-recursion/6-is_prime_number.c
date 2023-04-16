#include "main.h"
int is_prime(int n, int d);

/**
 * is_prime_number- the functions checks whether n is prime
 * @n: natural number to check
 * Return: 0 if n is not prime
 */

int is_prime_number(int n)
{
	int d = 2;

	if (n < 2)
	{
		return (0);
	}
	return (is_prime(n, d));
}

/**
 * is_prime - actual function that checks whether the number is prime
 * @n: number to check
 * @d: The divisor
 * Return: 0 no prime 1 prime number
 */
int is_prime(int n, int d)
{
	if (d == n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime(n, d + 1));
}
