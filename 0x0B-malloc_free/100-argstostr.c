#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 *argstostr - concatenates all arguments to the program
 *@ac: number of arguments
 *@av: pointer to a pointer
 *Return: 0
 */

char *argstostr(int ac, char **av)
{
	size_t length = 0;
	int x;
	char *result;
	size_t current_index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		length += strlen(av[x]);
	}
	length += ac;
	result = malloc(length + 1);

	if (result == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		size_t arg_len = strlen(av[x]);

		memcpy(result + current_index, av[x], arg_len);
		current_index += arg_len;
		result[current_index] = '\n';
		current_index++;
	}

	result[length] = '\0';

	return (result);
}
