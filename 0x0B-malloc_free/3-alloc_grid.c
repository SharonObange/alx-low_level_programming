#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *alloc_grid - generate a 2-D array of integers
 *@width: array width
 *@height: array height
 *Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **array;
	int x;
	int y;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(sizeof(int *) * height);

	if (array == NULL)
		return (NULL);

	for (x = 0; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (y = 0; y < x; y++)
				free(array[x]);
			free(array);
			return (NULL);
		}

		for (y = 0; y < width; y++)
		array[x][y] = 0;
	}

	return (array);
}
