#include "main.h"
/**
 * reverse_array - reverse elements in the array
 * @n: number of elements to reverse in the array
 * @a: the string to reverse
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0;  i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
