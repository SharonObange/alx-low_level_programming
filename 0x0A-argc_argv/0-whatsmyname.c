#include <stdio.h>
#include <string.h>
/**
 *main - prints its own name
 *@argc: number of arguments
 *@argv: array os strings carrying the command line arguments
 *Return : 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

