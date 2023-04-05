#include <stdio.h>
#include "main.h"
/**
 * _print_rev_recursion - prints a string in reverse recursively
 * @s: pointer to the string to be printed
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion((s + 1));
	}		
	_putchar(*s);
}
