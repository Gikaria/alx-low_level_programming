#include "function_pointers.h"
/**
 * int_index - function thta searches for an integer
 * @array: array of integers
 * @size: size of the array of integers
 * @cmp: pointer to a function
 * Return: -1 failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		i = 0;
		while (i < size)
		{
			if (cmp(array[i]) != 0)
				return (i);
			i++;
		}
		return (-1);
	}
	return (-1);
}
