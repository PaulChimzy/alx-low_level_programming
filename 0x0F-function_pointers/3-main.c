#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * main - performs an operation on numbers given as arguments
 * @argc: number of arguments given to the program
 * @argv: array of the arguments passed to the program
 * Return: returns the result of the operation based of the operator
 */
int main(int argc, char **argv)
{
	int (*operator)(int, int);

	operator = NULL;
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	operator = get_op_func(*(argv + 2));
	if (operator == NULL || *(argv[2] + 1) != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((operator == op_div || operator == op_mod) && *(*(argv + 3)) == 48)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		printf("%d\n", operator(atoi(*(argv + 1)), atoi(*(argv + 3))));
	}
	return (0);
}
