#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *is_arg_digit - checks if there are digits in the arguments
 *@arg_str: pointer to argument string
 *Return: 0 if no digit, 1 if digits
 */

int is_arg_digit(const char *arg_str)
{
	while (*arg_str)
	{
		if (!isdigit(*arg_str))
			return (0);
		arg_str++;
	}
	return (1);
}

/**
 *main - calculates sum of two digits
 *@argc: argument count
 *@argv: pointer to arguments provided for the program
 *Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int sum = 0;
	int x;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (x = 1; x < argc; x++)
	{
		if (!is_arg_digit(argv[x]))
		{
			printf("Error\n");
			return (1);
		}

		sum += atoi(argv[x]);
	}
	printf("%d\n", sum);
	return (0);
}
