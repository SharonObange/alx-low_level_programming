#include "main.h"

/**
 * _strspn - checks for bytes in string
 * @s: the string
 * @accept: the bytes to check
 * Return: the number of bytes
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int len = 0;
	int get;

	while (*s)
	{
		for (get = 0; accept[get]; get++)
		{
			if (*s == accept[get])
			{
				len++;
				break;
			}
			else if (accept[get + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}

