#include <stdio.h>
#include "main.h"
/**
 * factorial - determine the factorial of a number
 * @n: the number
 * Return: an integer which is the factorial of n
 */
int factorial (int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
