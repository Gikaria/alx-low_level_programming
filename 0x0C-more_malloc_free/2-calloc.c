#include "main.h"
#include <stdlib.h>
/**
 * _calloc - allocates memory of an array of nmemb elements
 * @nmemb: member elements of the array
 * @size: size occupied by array members
 * Return: pointer to memory spac of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char  *arr;
	unsigned int k, total_size;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	total_size = nmemb * size;
	arr = malloc(total_size);
	if (arr == NULL)
		return (NULL);
	for (k = 0; k < total_size; k++)
	{
		arr[k] = 0;
	}
	return (arr);
}

