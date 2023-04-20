#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * op_add - sums two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the sum of both integers
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds the difference between two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the difference of both integers
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the multiplication of both integers
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - obtains the division of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the division of both integers
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - obtains the modulus of two integers
 * @a: the first integer
 * @b: the second integer
 * Return: the result of the modulus of both integers
 */
int op_mod(int a, int b)
{
	return (a % b);
}
