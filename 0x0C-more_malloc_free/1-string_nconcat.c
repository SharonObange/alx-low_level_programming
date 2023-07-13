#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - concatenates two strings
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: bytes to pick from second string
 * Return: pointer to the concatenated string and NULL if the function fails
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int x = 0;
	unsigned int y = 0;
	unsigned int length1 = 0;
	unsigned int length2 = 0;

	while (s1 && s1[length1])
		length1++;

	while (s2 && s2[length2])
		length2++;

	if (n < length2)
		s = malloc(sizeof(char) * (length1 + n + 1));
	else
		s = malloc(sizeof(char) * (length1 + length2 + 1));

	if (!s)
		return (NULL);

	while (x < length1)
	{
		s[x] = s1[x];
		x++;
	}

	while (n < length2 && x < (length1 + n))
		s[x++] = s2[y++];

	while (n >= length2 && x < (length1 + length2))
		s[x++] = s2[y++];

	s[x] = '\0';

	return (s);
}

