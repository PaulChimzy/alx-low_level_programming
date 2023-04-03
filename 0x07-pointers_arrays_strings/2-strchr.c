#include <stdio.h>
#include "main.h"

/**
 * _strchr - finds the first occurence of character in a string
 * @s: pointer to the string to be searched
 * @c: character to llok for in the string
 * Return: pointer to the character in the string if ound else pointer to NULL
 */

char *_strchr(char *s, char c)
{
	int count;
	char *character;

	count = 0;
	*character = NULL;
	while (*(s + count) != '\0')
	{
		if (*(s + count) == c)
		{
			chracter = (s + count - 1);
			break;
		}
		count++;
	}
	return (character);
}
