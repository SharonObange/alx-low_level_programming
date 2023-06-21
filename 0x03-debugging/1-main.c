#include <stdio.h>

/**
 * main - causes and infinite loop
 * Return: 0
*/

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");

	i = 0;

	while (i < 10)
{
	putchar(i);
		/*i does not increment, and is always zero, forming an endless loop*/
	}

	printf("Infinite loop is avoided! \\o/\n");

	return (0);
}
