#include "main.h"

/**
 **_strncat - concatenates two strings
 *@dest: first string
 *@src: second string
 *@n: maximum point for second string
 *Return: concatenated string
*/

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (y < n && src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	dest[x] = '\0';
	return (dest);
}
