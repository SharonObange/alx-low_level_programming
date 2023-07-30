#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 *str_concat - concatenates two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: pointer to memory space containing the concatenates string
 * or null on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	int x = 0;
	int y = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{

		s2 = "";
	}

	concat_str = malloc(sizeof(char) * (x + y + 1));

	if (concat_str == NULL)
	{
		return (NULL);
	}

	while (s1[x] != '\0')
	{
		concat_str[x] = s1[x];
		x++;
	}
	while (s2[y] != '\0')
	{
		concat_str[x] = s2[y];
		x++;
		y++;
	}
	concat_str[x] = '\0';

	return (concat_str);
}



