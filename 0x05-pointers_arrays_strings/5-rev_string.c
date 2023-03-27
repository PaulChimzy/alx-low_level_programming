#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string and prints to the stout
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

void rev_string(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	while (count >= 0)
	{
		putchar(*(s + count));
		count--;
	}
	putchar('\n');
}
