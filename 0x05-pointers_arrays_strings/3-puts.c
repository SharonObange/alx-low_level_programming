#include "main.h"

/**
 *_puts - prints a string and new line
 *@str: string to be printed
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}

	_putchar('\n');
}
