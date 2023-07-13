#include <stdlib.h>
#include "main.h"

/**
 * *set_memory - fills the memory with a costant byte
 * @x: memory area to be filled
 * @y: character to copy
 * @a: number of times to copy character y
 * Return: a pointer to the memory area x
*/

char *set_memory(char *x, char y, unsigned int a)
{
	unsigned int b;

	for (b = 0; b < a; b++)
	{
		x[b] = y;
	}

	return (x);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 * Return: returns a pointer to the allocated memory
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pointer;

	if (nmemb == 0 || size == 0)
		return (NULL);

	pointer = malloc(size * nmemb);

	if (pointer == NULL)
		return (NULL);

	set_memory(pointer, 0, nmemb * size);

	return (pointer);
}
