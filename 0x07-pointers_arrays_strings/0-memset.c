#include "main.h"

/**
 * _memset - fills memory with a constant byte
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes of the memory area s
 * Return: returns a pointer to the memory area s
*/

char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
