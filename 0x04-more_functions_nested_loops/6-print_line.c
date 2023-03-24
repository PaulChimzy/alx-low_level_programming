#include <stdio.h>
#include "main.h"

/**
 * print_line - prints a line with underscore
 * @n: The number of times _ should be printed
 * Return: returns 0 if everything works fine
 */

void print_line(int n)
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
			_putchar('_');
		}
		_putchar('\n');
	}
}
