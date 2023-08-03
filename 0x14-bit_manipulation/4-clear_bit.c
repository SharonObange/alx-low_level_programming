#include <stdio.h>
#include "main.h"
/**
 *clear_bit - sets the value of a bit to 0
 *@n: pointer to the string of bits
 *@index: the index of the bit to be changed
 *Return: 1 if worked, -1 if error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int test;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	test = 1UL << index;
	test = ~test;
	*n &= test;

	return (1);
}
