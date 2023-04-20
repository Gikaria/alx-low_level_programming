#include "function_pointers.h"
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
		return;
	}
	do {
		action(*array);
		array++;
	} while (size-- > 0);
}
