#include <stdio.h>
#include "main.h"

/**
 * _strspn - finds the offset index where strings no longer match
 * @s: pointer to string that should be checked
 * @accept: pointer to the reference string
 * Return: length of string which matches the reference string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	int counter;
	bool found;

	count = 0;
	counter = 0;
	found = 0;
	while (*(s + count) != '\0')
	{
		counter = 0;
		while (*(accept + counter) != '\0')
		{
			if (*(s + count) == *(accept + counter))
			{
				found = 1;
				break;
			}
			counter++;
		}
		if (found == 1)
		{
			found = 0;
			count++;
			continue;
		}
		count++;
		break;
	}
	return (count);
}
