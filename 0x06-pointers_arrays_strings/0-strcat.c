#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: pointer to the destination string
 * @src: pointer to the other part of the string to be concatenated
 * Return: A pointer to the concatenated string
 */

 char *_strcat(char *dest, char *src):
{
	int count;
	int counter;

	count = 0;
	counter = 0;
	while (*(dest + count) != '\0')
	{
		count++;
	}
	while (*(src + counter) != '\0')
	{
		*(dest + count) = *(src + counter);
		count++;
		counter++;
	}
	*(dest + count) = '\0';

	return (dest);
}
