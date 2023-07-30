#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *free_grid - frees the 2D array created by alloc_grid function
 *@grid: pointer to the 2D array
 *@height: array height
 */

void free_grid(int **grid, int height)
{
	int x;

	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}

	free(grid);
}

