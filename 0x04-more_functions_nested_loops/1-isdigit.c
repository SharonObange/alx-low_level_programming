#include "main.h"

/**
 * _isdigit - checks is c is a digit
 * @c: character to be checked
 * Return: 1(Successful), 0(Failure)
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
