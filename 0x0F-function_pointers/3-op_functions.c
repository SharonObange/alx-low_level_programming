#include "3-calc.h"

/**************** Add Function *******************/
/**
 * op_add - calculates the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of the two integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**************** Subtract Function *******************/
/**
 * op_sub - calculates the difference between two integers
 * @a: first integer
 * @b: second integer
 * Return: difference of the two integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**************** Multiply Function *******************/
/**
 * op_mul - calculates the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of the two integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**************** Divide Function *******************/
/**
 * op_div - calculates the reult of dividing one integer by another
 * @a: first integer
 * @b: second integer
 * Return: result of a/b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**************** Modular Function *******************/
/**
 * op_mod - calculates the modular of an integer when divided by another
 * @a: first integer
 * @b: second integer
 * Return: the remainder of a/b
 */

int op_mod(int a, int b)
{
	return (a % b);
}
