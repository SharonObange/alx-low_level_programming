#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates and array of integers
 * @min: minimum range of values to be stores
 * @max: maximum number of values to be stores, also number of elements
 * Return: returns the pointer to the new array
*/

int *array_range(int min, int max)
{
	int *pointer;
	int x;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	pointer = malloc(sizeof(int) * size);

	if (pointer == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		pointer[x] = min++;

	return (pointer);
}
