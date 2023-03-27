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
	int i;
	int  counter;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	char temp[count];

	for (i = 0; i < count; i++)
	{
		temp[i] = *(s + count);
	}
	count--;
	counter = count;
	while (count >= 0)
	{
		*(s + count) = temp[counter - count];
		count--;
	}
}
