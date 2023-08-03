#include "main.h"

/**
 *print_binary - prints the binary representation on a number
 *@n: the number to be represented in binary
 */

void print_binary(unsigned long int n)
{
	int bits = sizeof(unsigned long int) * 8;
	int x, count = 0;
	unsigned long int currentBit;

	for  (x = 0; x < bits; x--)
	{
		currentBit = n >> x;

		if (currentBit & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
