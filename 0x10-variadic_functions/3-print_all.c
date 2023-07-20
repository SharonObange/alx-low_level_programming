#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_all - prints all types of variables
 *@format: list of type of arguments passed to the function
 *@...: any other argument
 */

void print_all(const char * const format, ...)
{
	va_list args;

	int x = 0;
	char *string, *separator = "";

	va_start(args, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", separator, va_arg(args, int));
					break;
				case 'i':
					printf("%s%d", separator, va_arg(args, int));
					break;
				case 'f':
					printf("%s%f", separator, va_arg(args, double));
					break;
				case 's':
					string = va_arg(args, char *);
					if (!string)
						string = "(nil)";
					printf("%s%s", separator, string);
					break;
				default:
					x++;
					continue;
			}
			separator = ",";
			x++;
		}
	}
	printf("\n");

	va_end(args);
}
