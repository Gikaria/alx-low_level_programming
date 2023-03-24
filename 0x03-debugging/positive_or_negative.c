#include <stdio.h>
/**
 * main - Entry point, determines whether random number is +ve or -ve
 * Description: 'checking whether a number is positive or negative'
 * Return: 0 if success
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	}
	else if (i == 0)
	{
		printf("%d is zero\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
}
