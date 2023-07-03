#include "main.h"
/**
 * _strpbrk - search string for a set of bytes
 * @s: string
 * @accept: bytes to search
 * Return: pointer(success) or null(failure)_
 */
char *_strpbrk(char *s, char *accept)
{
	int find;
	
	while (*s)
	{
		for (find = 0; accept[find]; find++)
		{
			if (*s == accept[find])
				return (s);
		}
		
		s++;
		
	}
	
	return ('\0');
}

