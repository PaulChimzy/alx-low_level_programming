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
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < i; j++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
