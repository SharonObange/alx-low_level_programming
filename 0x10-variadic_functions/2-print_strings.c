#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - prints an array of characters as a string
 *@separator: a constant character array
 *@n: number of characters in the array
 *@...: other arguments
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	char *string;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
		{
			printf("(nil)");
		}

		else
		{
			printf("%s", string);
		}

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);

	printf("\n");
}

