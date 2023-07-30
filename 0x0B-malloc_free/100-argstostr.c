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
	size_t total_length = 0;
	int i;
	char *result;
	size_t current_index = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]);
	}
	total_length += ac;
	result = malloc(total_length + 1);

	if (result == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		size_t arg_len = strlen(av[i]);

		memcpy(result + current_index, av[i], arg_len);
		current_index += arg_len;
		result[current_index] = '\n';
		current_index++;
	}

	result[total_length] = '\0';

	return (result);
}
