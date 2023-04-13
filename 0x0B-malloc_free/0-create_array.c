#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * create_array - function that creates array of characters
 * @size: the size of the array
 * @c: charcters to place in an array
 * Return: pointer to array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc(size * sizeof(char));
	if (!size == 0)
	{
		if (ptr == NULL)
		{
			exit(0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = i + 1;
				ptr[i] = c;
			}
		}
		return (ptr);
	}
	return (NULL);
}
