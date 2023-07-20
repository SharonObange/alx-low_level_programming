#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_numbers - prints out numbers provided in arguments
 *@separator: pointer to the separator
 *@n: number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int x;
	int num;

	va_start(args, n);

	for (x = 0; x < n; x++)
	{
		num = va_arg(args, int);
		printf("%d", num);

		if (separator != NULL && x < n - 1)
		{
			printf("%s", separator);
		}
	}

	va_end(args);
	printf("\n");
}

