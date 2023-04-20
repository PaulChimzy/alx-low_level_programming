#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * get_op_func - selects the correct function to perfomr operation
 * @s: pointer to the operator to be used
 * Return: pointer to function that corresponds to operator
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {{"+", op_add}, {"-", op_sub}, {"*", op_mul},
		{"/", op_div}, {"%", op_mod}, {NULL, NULL}};
	int i;

	i = 0;
	while (i < 5)
	{
		if (*s == *ops[i].op)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (ops[5].f);
}
