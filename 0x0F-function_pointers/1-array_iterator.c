#include "function_pointers.h"
#include <stdlib.h>
/**
 * array_iterator - function that executes a function
 * @action: pointer to a function searching for an integer
 * @array: an array of integers
 * @size: size of the array
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
	{
		exit(0);
	}
	do {
		action(*array);
		array++;
		size--;
	} while (size > 0);
}
