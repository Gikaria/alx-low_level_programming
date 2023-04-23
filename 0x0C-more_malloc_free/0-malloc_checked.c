#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - returns pointer to allocated memory
 * @b: size of the memory
 * Return: pointer to memory space
 */
void *malloc_checked(unsigned int b)
{
	void *c;

	c = malloc(b);
	if (c == NULL)
	{
		exit(98);
	}
	else
	{
		return (c);
	}
}
