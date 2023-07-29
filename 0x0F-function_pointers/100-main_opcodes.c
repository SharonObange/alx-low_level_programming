#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints out its own opcodes
 *@argc: the number of arguments
 *@argv: pointer to array of strings representing the commandline arguments
 *Return: 0
*/

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int number_of_bytes = atoi(argv[1]);

	if (number_of_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	char *array_element = (char *)main;
	int x;

	for (x = 0; x < number_of_bytes; x++)
	{
		printf("%02hhx\n", array_element[x]);
	}

	return (0);
}
