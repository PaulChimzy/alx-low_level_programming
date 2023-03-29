#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings to see if they are the same
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * Return:the difference between the two strings as an integer
 */

int _strcmp(char *s1, char *s2)
{
	int count;

	count = 0;
	while(*(s1 + count) != '\0' && *(s2 + count) != '\0')
	{
		if (*(s1 + count) == *(s2 + count))
		{
			count++;
			continue;
		}
		else
		{
			return (*(s1 + count) - *(s2 + count));
		}
	}
	return (0);
}
