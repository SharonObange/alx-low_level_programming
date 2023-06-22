#include <stdio.h>
/**
 * main - Prints number and check positivity and negativity
 * Return: 0 (Success), 1(Fail)
 */
void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else if (i < 0)
		printf("%d is negative\n", i); 
}
