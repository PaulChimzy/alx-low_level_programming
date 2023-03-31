#include <stdio.h>
#include "main.h"
/**
 * cap_string - converts all lowercase characters to uppercase based on delimeters
 * @s: pointer to the string to be converted to uppercase
 * Return: a pointer to the converted string
 */
char *cap_string(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		if (count == 0)
		{
			if (*(s + count) > 96 && *(s + count) < 123)
			{
				*(s + count) = *(s + count) - 32;
			}
			count++;
		}
		else
		{
			if (*(s + count - 1) == ' ' || *(s + count - 1) == '!' || *(s + count - 1) == 34 
			    || *(s + count - 1) == '\t' || *(s + count - 1) == '\n' || *(s + count - 1) == ',' 
			    || *(s + count - 1) == ';' || *(s + count - 1) == '.' || *(s + count - 1) == '?' 
			    || *(s + count - 1) == '(' || *(s + count - 1) == ')' || *(s + count - 1) == '{' 
			    || *(s + count - 1) == '}')
			{
				if (*(s + count) > 96 && *(s + count) < 123)
				{
					*(s + count) = *(s + count) - 32;
				}
			}
			count++;
		}
	}
	return (s);
}
