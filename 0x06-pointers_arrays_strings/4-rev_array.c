#include "main.h"

/**
 * reverse_array -  reverses items in array
 * @a: array to be reversed
 * @n: number of elements in array
*/

void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
