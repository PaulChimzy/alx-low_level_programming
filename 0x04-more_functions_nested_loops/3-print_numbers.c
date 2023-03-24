#include <stdio.h>
#include "main.h"

/**
 * print_numbers - prints numbers 0 through to 9
 * Return: returns 0 if everything works fine
 */

void print_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
