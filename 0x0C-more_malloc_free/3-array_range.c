#include "main.h"
#include <stdlib.h>
/**
 * array_range- function that alloactes memory an array
 * @min: minimum value
 * @max: maximum value
 * Return: pointer to array of numbers from min to max
 */
int *array_range(int min, int max)
{
	unsigned int k, size;
	int *my_array;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	my_array = malloc(size * sizeof(int));
	if (my_array == NULL)
	{
		return (NULL);
	}
	for (k = 0; k < size; k++, min++)
	{
		my_array[k] = min;
	}
	return (my_array);
}
