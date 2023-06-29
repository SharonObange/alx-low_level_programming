#include "main.h"

/**
 **_strcat - concatenates two strings
 *@dest: first string
 *@src: second string
 *Return: returns concatenated string
*/

char *_strcat(char *dest, char *src)
{
	int x;
	int y;

	/*to check when the first string ends*/
	x = 0;
	while (dest[x] != '\0')
	{
		x++;
	}

	/*to add second string to first string*/
	y = 0;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		x++;
		y++;
	}

	/*add termination*/
	dest[x] = '\0';
	return (dest);
}
