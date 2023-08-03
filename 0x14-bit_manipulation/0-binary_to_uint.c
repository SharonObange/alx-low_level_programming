#include <stdio.h>

/**
 *binary_to_uint - converts binary to unsigned integer
 *@b: a pointer to a string of 0 and 1 chars
 *Return: the converted number or 0 if failed
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int x = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[x])
	{
		if  (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		else
		{
			result = (result << 1) + (b[x] - '0');

			x++;
		}
	}
	return (result);
}
