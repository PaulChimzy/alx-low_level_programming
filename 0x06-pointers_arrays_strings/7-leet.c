#include <stdio.h>
#include "main.h"

/**
 * leet - encode specific characters in a string
 * @s: pointer to the string to be encoded
 * Return: A pointer to the encoded string
 */

char *leet(char *s)
{
	int count;
	int i;

	char exp[6] = {'A', 'E', 'O', 'T', 'L'};
	int code[6] = {52, 51, 48, 55, 49};

	count = 0;
	while (*(s + count) != '\0')
	{
		for (i = 0; i < 5; i++)
		{
			if (*(s + count) == exp[i] || *(s + count) == exp[i] + 32)
			{
				*(s + count) = code[i];
			}
		}
		count++;
	}
	return (s);
}
