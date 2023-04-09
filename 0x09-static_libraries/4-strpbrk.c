#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - finds the first occurence of character in a string
 * @s: pointer to the string to be searched
 * @accept: reference string
 * Return: pointer to the character in the string if ound else pointer to NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int count;
	int counter;
	char *character;

	count = 0;
	counter = 0;
	character = NULL;
	while (*(s + count) != '\0')
	{
		counter = 0;
		while (*(accept + counter) != '\0')
		{
			if (*(s + count) == *(accept + counter))
			{
				character = (s + count);
				return (character);
			}
			counter++;
		}
		count++;
	}
	return (character);
}
