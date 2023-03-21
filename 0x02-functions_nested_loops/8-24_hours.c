#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - prints the hours in a day
 * Return: returns 0 if everything works fine
 */

void jack_bauer(void)
{
	int one;
	int two;
	int three;
	int four;

	for (one = 0; one < 3; one++)
	{
		_putchar('0' + one);
		for (two = 0; two < 10; two++)
		{
			_putchar('0' + two);
			_putchar(':');
			for (three = 0; three < 7; three++)
			{
				_putchar('0' + three);
				for (four = 0; four < 10; four++)
				{
					_putchar('0' + four);
					_putchar('\n');
				}
			}
		}
	}
}
