#include <stdio.h>
#include <stdlib.h>

/**
 *main - determine the min num of coins to make change
 *@argc: number of arguments
 *@argv: pointer to arguments provided for the program
 *Return: 0
 */

int main(int argc, char *argv[])
{
	int cents;
	int x;
	int num_of_coins = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (x = 0; x < 5 && cents >= 0; x++)
	{
		while (cents >= coins[x])
		{
			num_of_coins++;
			cents -= coins[x];
		}
	}
	printf("%d\n", num_of_coins);
	return (0);
}
