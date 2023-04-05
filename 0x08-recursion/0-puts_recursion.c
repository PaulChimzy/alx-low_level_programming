#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string to the stdout recursively
 * @s: pointer to the string to be printed out
 */
void _puts_recursion(char *s)
{
	int count;

	count = 0;
	if (*(s + count) != '\0')
	{
		_putchar(*(s + count));
		_puts_recursion((s + count + 1));
	}
	else
	{
		_putchar('\n');
	}
}
