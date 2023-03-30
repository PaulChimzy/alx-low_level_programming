#include <stdio.h>
#include "main.h"

/**
 * string_toupper - converts all lowercase characters to uppercase
 * @s: pointer to the string tobe converted to uppercase
 * Return: a pointer to the converted string
 */

char *string_toupper(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (*(s + count) > 96 && *(s + count) < 123)
		{
			*(s + count) = *(s + count) - 32;
			count++;
			continue;
		}
		count++;
	}
	return (s);
}
