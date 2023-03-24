#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks if character is a digit
 * @c: a character for testing
 * Return: returns 1 if true else returns false
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
