#include "main.h"

/**
 * _isupper - checks if character is uppercase
 * @c: character to be checked
 * Return: 1(Successful), 0(Failure)
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
