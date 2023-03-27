#include <stdio.h>
#include "main.h"

/**
 * _puts - writes a string to the stdout
 * @str: pointer to the string (array of characters)
 * Return: the length of the string
 */

void _puts(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		putchar(*(str + count));
		count++;
	}
	putchar('\n');
}
