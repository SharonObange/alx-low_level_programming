#include <stdio.h>

/**
 * main - Prints alphabet in lowercase then in uppercase
 * Return: 0(Successful), 1(Failure)
*/

int main(void)
{
	char small_letters;
	char capital_letters;

	for (small_letters = 'a'; small_letters <= 'z'; small_letters++)
	{
		putchar (small_letters);
	}
	for (capital_letters = 'A'; capital_letters <= 'Z'; capital_letters++)
	{
		putchar(capital_letters);
	}
	putchar('\n');
	return (0);
}
