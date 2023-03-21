es (18 sloc)  253 Bytes

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
		_putchar(rem + '0');
		return (rem);
	}

	else
	{
		n = n * -1;
		rem = n % 10;
		_putchar(rem + '0');
		return (rem);
		
	}
}
