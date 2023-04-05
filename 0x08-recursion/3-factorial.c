#include "main.h"
/**
 * factorial - prints factorial of any number
 * @n: number to be factored
 * Return: factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
