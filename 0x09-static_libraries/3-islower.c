#include <stdio.h>
#include "main.h"

/**
 * _islower - checks if character is lowercase
 * @c: a character for testing
 * Return: returns 1 if true else returns false
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
