#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabets
 * Return: returns 0 if everything works fine
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i < 123; i++)
	{
		_putchar(i);
	}
	putchar('\n');
}
