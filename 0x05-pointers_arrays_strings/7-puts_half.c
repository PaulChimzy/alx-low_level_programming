#include <stdio.h>
#include "main.h"

/**
 * puts_half -prints the last half of a string
 * @str: pointer to the string (array of characters)
 * Return: the length of the string
 */

void puts_half(char *str)
{
	int count;
	int start;

	count = 0;
	while (*(str + count) != '\0')
	{
		count++;
	}
	count--;
	start = count / 2;
	if (count % 2 != 0)
	{
		start = (count + 1) / 2;
	}
	while (start != count + 1)
	{
		putchar(*(str + start));
		start++;
	}
	putchar('\n');
}
