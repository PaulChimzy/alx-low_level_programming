#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings together based on n bytes
 * @dest: pointer to the destination string
 * @src: pointer to the other part of the string to be concatenated
 * @n: number of bytes to copy
 * Return: A pointer to the concatenated string
 */

 char *_strncat(char *dest, char *src, int n)
{
	int count;
	int counter;

	count = 0;
	counter = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (*(src + counter) != '\0' && counter < n)
	{
		*(dest + count) = *(src + counter);
		count++;
		counter++;
	}
	*(dest + count) = '\0';

	return (dest);
}
