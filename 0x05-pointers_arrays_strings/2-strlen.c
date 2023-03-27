#include <stdio.h>
#include "main.h"

/**
 * _strlen - determine the length of a string
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while *(s + count) != '\0'
	{
		count++;
	}
	return (count);
}
