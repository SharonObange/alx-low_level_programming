#include <stdio.h>
#include <stdlib.h>
/**
 *main - multiples two numbers
 *@argc: number of arguments
 *@argv: array of strings containing command line arguments
 *Return: 0 for correct entry, 1 for wrong entry
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	result = num1 * num2;

	printf("%d\n", result);
	return (0);
}
