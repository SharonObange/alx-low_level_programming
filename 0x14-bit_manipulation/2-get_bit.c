#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: the bit array to be checked
 *@index: index of the bit to get
 *Return: the value of the bit at index or -1 if failed
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int bit_size = sizeof(unsigned long int) * 8;
	int result;

	if (index >= bit_size)
	{
		return (-1);
	}

	result = (n >> index) & 1;

	return (result);
}
