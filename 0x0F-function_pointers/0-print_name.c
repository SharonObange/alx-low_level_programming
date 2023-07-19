#include "function_pointers.h"

/**
 *print_name - prints the name
 *@name: name to be printed
 *@f: pointer to the name
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
