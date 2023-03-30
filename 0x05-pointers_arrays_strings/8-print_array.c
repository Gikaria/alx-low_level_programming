#include "main.h"
#include <stdio.h>
/**
 * print_array- prints number of elements in an array
 * @a: the array
 * @n: number of elements in an array
 */
void print_array(int *a, int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
			printf(", ");
		i++;
	}
	printf("\n");
}
