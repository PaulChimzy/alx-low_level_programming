#include <stdio.h>
#include "main.h"

/**
 * times_table - prints the 9 times table
 * @n: an integer for testing
 * Return: returns 1 if true else returns 0
 */

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar('0' + i * j);
			_putchar(',');
			_putchar(' ');
		}
		_putchar('\n');
	}

}
