#include "3-calc.h"
#include <stdlib.h>

/**
 * get_op_func - selects the correct function for user operation
 * @s: the operator passed as an argument
 * Return: a pointer to the corresponding function
*/

int (*get_op_func(char *s))(int, int)
{
	op_t operation[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL},
	};

	int x = 0;

	while (operation[x].op != NULL && *(operation[x].op) != *s)
		x++;

	return (operation[x].f);
}
