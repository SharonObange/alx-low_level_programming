#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer containing a copy of
 *the string given as a parameter
 *@str: the string to copy
 *Return: pointer to newly allocated memory space
 *or NULL is str is NULL
 */

char *_strdup(char *str)
{
	char *copy;
	int x = 0;
	int y = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[x] != '\0')
		x++;

	copy = (char *)malloc(sizeof(char) * (x + 1));

	if (copy == NULL)
	{
		return (NULL);
	}

	for (y = 0; str[y]; y++)
	{
		copy[y] = str[y];
	}

	return (copy);
}
