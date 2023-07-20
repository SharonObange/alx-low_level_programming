#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - sums up all arguments
 *@n: number of arguments
 *Return: sum of arguments, 0 if n is 0
 *@...: variable number of parameters
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg;
	unsigned int sum, x = 0;
	
	va_start(arg, n);
	
	for (x = 0; x < n; x++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(arg, int);
		}
	}

	va_end(arg);

	return (sum);
}
