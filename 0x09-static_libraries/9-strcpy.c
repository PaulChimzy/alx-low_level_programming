#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies a string to a buffer
 * @dest: Where the strings should be copied into
 * @src: Where the strings should be copied from
 * Return: a pointer to the destination
 */

char *_strcpy(char *dest, char *src)
{
	int count;

	count = 0;
	while (*(src + count) != '\0')
	{
		*(dest + count) = *(src + count);
		count++;
	}
	*(dest + count) = *(src + count);
	return (dest);
}
