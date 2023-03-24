#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: The number of times # should be printed
 * Return: returns 0 if everything works fine
 */

void print_triangle(int size);
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}

	else
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < size - i -1)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
}
