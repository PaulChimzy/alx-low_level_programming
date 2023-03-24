#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - prints blackslashes to form a diagonal
 * @n: The number of times \ should be printed
 * Return: returns 0 if everything works fine
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			_putchar(92);
		}
		_putchar('\n');
	}
}
