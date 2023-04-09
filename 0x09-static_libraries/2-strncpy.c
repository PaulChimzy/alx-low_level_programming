#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a n-bytes string from one buffer to another buffer
 * @dest: pointer to the destination string
 * @src: pointer to the other part of the string to be copied
 * @n: number of bytes to copy
 * Return: A pointer to the concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		if (*(src + count) == '\0')
		{
			*(dest + count) = *(src + count);
			break;
		}
		*(dest + count) = *(src + count);
		count++;
	}
	return (dest);
}
