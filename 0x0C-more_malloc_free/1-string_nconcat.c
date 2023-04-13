#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - concatenates two strings in allocated memory
 * @s1: pointer to the first string
 * @s2: pointer to the second string
 * @n: number of bytes to be copied from string 2
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arr;
	int size_1;
	unsigned int size_2;
	int i;

	size_1 = 0;
	size_2 = 0;
	while (s1 != NULL && *(s1 + size_1) != '\0')
	{
		size_1++;
	}

	while (s2 != NULL && *(s2 + size_2) != '\0')
	{
		size_2++;
	}

	if (size_2 > n)
	{
		size_2 = n;
	}

	arr = malloc(sizeof(char) * (size_1 + size_2 + 1));
	if (arr != NULL)
	{
		for (i = 0; i < (size_1 + size_2); i++)
		{
			if (i < size_1)
				arr[i] = *(s1 + i);
			else
				arr[i] = *(s2 + i - size_1);
		}
		arr[size_1 + size_2] = '\0';
	}
	return (arr);
}


