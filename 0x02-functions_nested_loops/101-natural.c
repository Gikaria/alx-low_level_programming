#include <stdio.h>
/**
 * main - entry point
 * description: print out sum of multipes of three and 5
 * Return: 0 success
 */
int main(void)
{
	int n, sum = 0;

	for (n = 0; n < 1024; n++)
	{
		if ((n % 3) == 0 && (n % 5) == 0)
		{
			sum += n;
		}
	}
	printf("%d\n", n);
	return (0);
}
