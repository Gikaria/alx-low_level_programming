#include "main.h"
#include <stdlib.h>
/**
 * _realloc - reallocates block of memory
 * @ptr: pointer to old memory block
 * @old_size: old memory size
 * @new_size: new memory block to allocate
 * Return: pointer to new memory block
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	int k, size;
	char *old_alloc, *new_alloc;

	if (ptr != NULL)
		old_alloc = ptr;
	else
		return (malloc(new_size));

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	new_alloc = malloc(new_size);
	if (new_alloc == NULL)
		return (NULL);

	size = (new_size <  old_size) ? new_size : old_size;
	for (k = 0; k < size; k++)
	{
		new_alloc[k] = old_alloc[k];
	}
	free(ptr);
	return (new_alloc);
}
