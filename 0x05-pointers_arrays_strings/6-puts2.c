#include <stdio.h>
#include "main.h"

/**
 * puts2 - prints every other character
 * @str: pointer to the string (array of characters)
 * Return: the length of the string
 */

void puts2(char *str)
{
	int count;

	count = 0;
	while (*(str + count) != '\0')
	{
		if (count % 2 == 0)
		{
			putchar(*(str + count));
		}
		count++;
	}
	putchar('\n');
}
