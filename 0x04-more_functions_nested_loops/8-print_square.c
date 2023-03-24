#include <stdio.h>
#include "main.h"

/**
 * print_square - prints a square of  a given size using #
 * @size: The number of times # should be printed to form a square
 * Return: returns 0 if everything works fine
 */

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}
