#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sum of diagonal
 * @a: element
 * @size: size of the matrix
*/

void print_diagsums(int *a, int size)
{
	int sum1 = 0;
	int sum2 = 0;
	int x;
	int y;

	for (x = 0; x < size; x++)
	{
		sum1 = sum1 + a[x * size + x];
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
