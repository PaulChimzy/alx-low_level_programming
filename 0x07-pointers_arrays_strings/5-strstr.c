#include <stdio.h>
#include "main.h"

/**
 * _strstr - finds the first occurence of character in a string
 * @haystack: pointer to the string to be searched
 * @needle: character to llok for in the string
 * Return: pointer to the character in the string if ound else pointer to NULL
 */
char *_strstr(char *haystack, char *needle)
{
	int count;
	int counter;
	int counter2;
	char *character;

	count = 0;
	counter = 0;
	counter2 = 0;
	character = NULL;
	while (*(haystack + count) != '\0')
	{
		counter = 0;
		if (*(needle + counter) == *(haystack + count))
		{
			counter2 = count;
			while (*(needle + counter) != '\0')
			{
				if (*(needle + counter) != *(haystack + counter2))
				{
					break;
				}
				counter++;
				counter2++;
				if (*(needle + counter) == '\0')
				{
					character = (haystack + count);
					return (character);
				}
			}
		}
		count++;
	}
	return (character);
}
