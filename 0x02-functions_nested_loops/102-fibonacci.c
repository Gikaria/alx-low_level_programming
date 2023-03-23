#include <stdio.h>
/**
 * main - Entry point
 * description: print out fibonacci for firts 50 numbers
 * Return: 0 success
 */
int main(void)
{
	int a1 = 1, a2 = 2, a3, n;
	
	printf("%d, %d, ", a1, a2);
	for (n = 0; n < 50; ++n)
	{
		a3 = a1 + a2;
		printf("%d, ", a3);
		a1 = a2;
		a2 = a3;

		if (n == 49)
		{
			printf("\n");
		}
	}
	return (0);
}
