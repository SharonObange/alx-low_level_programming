#include <stdio.h>

/**
 *main - prints number of arguments passed
 *@argc: number of arguments passed
 *@argv: array of strings carrying the command line arguments
 *Return: 0
 */

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);
}
