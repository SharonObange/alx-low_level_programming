#include <stdio.h>
/**
 * array_iterator - executes a function of arrays
 * @array: the array formed
 * @size: the array size
 * @action: a pointer to the functions
 * Return: nothing if null
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	else if (array && action)
	{
		unsigned int i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
