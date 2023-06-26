#include "main.h"

/**
 *_strlen - checks length of a string
 *@s: the string
 *Return: length of the string
*/

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
