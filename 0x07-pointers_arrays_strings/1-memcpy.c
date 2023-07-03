#include "main.h"

/**
 *_memcpy - copies memory from one area to another
 *@dest: new memory storage area
 *@src: memory source area
 *@n: number of bytes
 *
 *Return: copied memory with n byted changed
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int x = 0;
	int y = n;

	for (; x < y; x++)
	{
		dest[x] = src[x];
		n--;
	}
	return (dest);
}

