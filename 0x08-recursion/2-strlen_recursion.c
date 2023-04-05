#include <stdio.h>
#include "main.h"
/**
 * _strlen_recursion - determines the number of characters in a string
 * @s: pointer to the string
 * Return: an integer count of the string length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion((s + 1)));
	}
}
