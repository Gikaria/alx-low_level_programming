#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	unsigned long int b, c = 612852475143;

	for (b = 3; b < 782849; b = b + 2)
	{
		while ((c % b == 0) && (c != b))
		{
			c = c / b;
		}
	}
	printf("%lu\n", c);
	return (0);
}

