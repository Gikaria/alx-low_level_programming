#include <stdio.h>
/**
 * main - Entry point
 * description: print out fibonacci for firts 50 numbers
 * Return: 0 success
 */
int main(void)
{
	unsigned long a1 = 1, a2 = 2, a3;
	int n;

	printf("%lu, %lu, ", a1, a2);

	for (n = 0; n < 48; n++)
	{
		a3 = a1 + a2;
		printf("%lu, ", a3);
		a1 = a2;
		a2 = a3;

		if (n == 47)
		{
			printf("\n");
		}
	}
	return (0);
}
