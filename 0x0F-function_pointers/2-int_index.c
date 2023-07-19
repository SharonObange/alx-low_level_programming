#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: pointer to the array of elements
 * @size: number of elements in the array
 * @cmp:pointer to the function used
 * to compare variables
 * Return: the integer found(success), -1(failure)
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	else
	{
		int x;

		for (x = 0; x < size; x++)
		{
			if (cmp(array[x]) != 0)
			{
				return (x);
			}
		}

		return (-1);
	}
}

