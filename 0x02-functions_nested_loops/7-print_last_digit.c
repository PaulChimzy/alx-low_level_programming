#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: an integer for testing
 * Return: returns 1 if true else returns 0
 */

int print_last_digit(int n)
{
	int rem;

	if (n >= 0)
	{
		rem = n % 10;
		_putchar('0' + rem);
		return (rem);
	}

	else
	{
		n = n * -1;
		rem = n % 10;
		_putchar('0' + rem);
		return (rem);
	}
}
