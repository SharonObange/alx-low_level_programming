#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums up all arguments
 *@n: number of arguments
 *Return: sum of arguments, 0 if n is 0
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int sum, x;

	if (n == 0)
	{
		return (0);
	}	

	va_start(args, n);

	for (x = 0; x <= n; x++)
	{
		sum += va_arg(args, int);
	}

	va_end(args);

	return (sum);
}
