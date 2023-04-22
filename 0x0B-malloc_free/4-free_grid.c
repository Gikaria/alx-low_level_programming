#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees memoery allocated to two dimesniosnal array
 * @grid: Address of two dimensional array
 * @height: height of the array
 */
void free_grid(int **grid, int height)
{
	int j;

	if (grid)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
