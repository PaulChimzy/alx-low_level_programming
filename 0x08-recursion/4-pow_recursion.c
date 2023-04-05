#include <stdio.h>
#include "main.h"
/**
 * _pow_recursion - calculate the power of a number with recursive functions
 * @x: integer which is the base number
 * @y: integer which is the power
 * Return: an integer which is the answer to the calculation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
