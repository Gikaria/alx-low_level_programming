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

	arr = (int **)malloc(height * sizeof(*arr));
	for (i = 0; i < width; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(**arr));
	}
	if (arr == NULL)
		exit(0);

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