#include <stdio.h>
#include "main.h"

/**
 * _abs - converts a number to absolute number
 * @n: an integer for testing
 * Return: returns 1 if true else returns 0
 */

int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}

	else
	{
		return (n * -1);
	}
}
