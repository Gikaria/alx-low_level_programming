#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - print sum of two diagonals of square matrix
 * @a: square matrix array
 * @size: size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1, sum2;

	sum1 = 0;
	sum2 = 0;
	i = 0;
	while (i < size)
	{
		sum1 = sum1 + a[i];
		a = a + size;
		i++;
	}
	a = a - size;
	j = 0;
	while (j < size)
	{
		sum2 = sum2 + a[j];
		a = a - size;
		j++;
	}
	printf("%d, %d\n", sum1, sum2);
}
