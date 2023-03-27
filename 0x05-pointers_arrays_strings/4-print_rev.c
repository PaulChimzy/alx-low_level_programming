#include <stdio.h>
#include "main.h"

/**
 * print_rev - reverses a string and prints to the stout
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

void print_rev(char *s)
{
	int count;

	count = _strlen(s);
	while (count >= 0)
	{
		putchar(*(s + count));
		count--;
	}
	putchar('\n');
}
