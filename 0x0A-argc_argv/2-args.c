#include <stdio.h>

/**
 *main - prints all the arguments passed
 *@argc: number of arguments passed
 *@argv: array os strings containing the command line arguments
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}

