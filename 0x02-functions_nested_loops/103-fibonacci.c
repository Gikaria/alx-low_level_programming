#include <stdio.h>
/**
 * main - Entry point
 * Description: prints out the sum of fibonacci numbers not exceeding 4,000,00
 * Return: 0 success
 */
int main(void)
{
	unsigned long a1 = 0, a2 = 1, a3;
	float sum = 0.00;

	while (a3 < 4000000)
	{
		a3 = a1 + a2;
		if ((a3 % 2) == 0)
		{
			sum += a3;
		}
		a1 = a2;
		a2 = a3;
	}
	printf("%.0f\n", sum);
	return (0);
}


