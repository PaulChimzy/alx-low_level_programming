#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - checks if character is lowercase
 * Return: returns 1 if true else returns false
 */

int _islower(int c)
{
	if ( c >= 97 && c <= 122)
	{
		return (1);
	}

	else
	{
		return (0);
	}
}
	
