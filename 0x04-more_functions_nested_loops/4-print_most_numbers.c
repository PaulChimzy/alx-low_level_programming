#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 through to 9 except 2 and 4
 * Return: returns 0 if everything works fine
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		else
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
