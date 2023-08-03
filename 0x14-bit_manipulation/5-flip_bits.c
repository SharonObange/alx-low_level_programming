#include "main.h"

/**
 *flip_bits - checks number of bits one would need,
 *to flip to get from one number to another
 *@n: number to be checked
 *@m: second number
 *Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int toggleCheck = n ^ m;
	unsigned int count = 0;

	while (toggleCheck)
	{
		count += toggleCheck & 1;
		toggleCheck >>= 1;
	}

	return (count);
}
