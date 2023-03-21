#include <stdio.h>
#include "main.h"

/**
 * print_sign - determines the sign of a number
 * @n: an integer for testing
 * Return: returns 1 if true else returns 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		return (1);
	}

	else if (n < 0)
	{
		_putchar('-')
		return (-1);
	}

	else
	{
		_putchar('0')
		return (0);
	}
}
