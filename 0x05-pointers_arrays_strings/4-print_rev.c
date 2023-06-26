#include "main.h"

/**
 * print_rev - reverses string characters
 * @s: the string characters
*/

void print_rev(char *s)
{
	int string_length = 0;
	int x;

	while (*s != '\0')
	{
		string_length++;
		s++;
	}

	s--;

	for (x = string_length; x > 0; x--)
	{
		_putchar(*s);
		s--;
	}
}
