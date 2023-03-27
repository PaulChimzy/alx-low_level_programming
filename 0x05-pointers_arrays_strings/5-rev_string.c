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

	count = 0;
	temp = 'a';
	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	counter = 0;
	if (count % 2 != 0)
	{	
		while (count != counter + 1)
		{
			temp = *(s + count);
			*(s + count) = *(s + counter);
			*(s + counter) = temp;
			count--;
			counter++;
		}
	}
	else
	{
		while (count != counter)
		{
			temp = *(s + count);
			*(s + count) = *(s + counter);
			*(s + counter) = temp;
			count--;
			counter++;
		}
	}
}
