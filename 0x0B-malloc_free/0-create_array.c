#include <stdlib.h>
#include "main.h"

/**
 *create_array - create an array of characters
 *@size: size of the array
 *@c: char to assign
 *Return: a pointer to the array, NULL for failure
 */

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int x;

	if (size == 0)
	{
		return (NULL);
	}


	array = malloc(sizeof(char) * size);

	if (array == NULL)
	{
		return (NULL);
	}

	for (x = 0; x < size; x++)
	{
		array[x] = c;
	}

	return (array);
}
