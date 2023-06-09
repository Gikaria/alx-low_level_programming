#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function returns a pointer to 2D array
 * @width: rows
 * @height: columns
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j, sum;
	int **arr;

	if (width == 0 || width < 0)
		return (NULL);

	if (height == 0 || height < 0)
		return (NULL);

	arr = (int **)malloc(height * sizeof(int *));

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}
	sum = 0;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			*(*(arr + i) + j) = sum;
		}
	}
	return (arr);
}
