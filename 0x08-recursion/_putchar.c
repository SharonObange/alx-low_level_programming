#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to standard output
 * @c: the character to write
 *
 * Return: 1(Successful), 0(Failure)
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
