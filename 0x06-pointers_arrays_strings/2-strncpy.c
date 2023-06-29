#include "main.h"

/**
 *_strncpy - copies one string to another
 *@dest: first string
 *@src: second string
 *@n: character postion number in string
 *Return: new string
*/

char *_strncpy(char *dest, char *src, int n)
{
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}
	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}

	return (dest);
}
