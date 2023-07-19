#include "function_pointers.h"
#include <stdio.h>

/**
 *print_name - prints the name using a function pointer
 *@name: name to be printed
 *@f: pointer to a function that prints name
 *Return: nothing if NULL
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
		return;

	f(name);
}
