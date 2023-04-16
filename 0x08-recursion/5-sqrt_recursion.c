#include "main.h"
/**
 * sqrt_number- returns the actual root of any natural number
 * @a: the root
 * @n: natural number to find its sqrt
 * Return: i The root or -1 failure
 */
int sqrt_number(int n, int a);
int sqrt_number(int n, int a)
{
	if (a * a > n)
	{
		return (-1);
	}
	if (a * a == n)
	{
		return (a);
	}
	return (sqrt_number(n, a + 1));
}
/**
 * _sqrt_recursion - returns natural sqrt of a number
 * @n: natural number
 * Return: -1 on failure
 */
int _sqrt_recursion(int n)
{
	int a = 0;

	if (n < 1)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (sqrt_number(n, a));
}
