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
	char temp;
	int counter;
	int i;
	int j;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	counter = count;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < counter; j++)
		{
			temp = *(s + j);
			*(s + j) = *(s + j + 1);
			*(s + j + 1) = temp;
		}
		counter--;
	}
}
