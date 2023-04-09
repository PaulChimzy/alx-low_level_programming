#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies a n-bytes from one buffer to another buffer
 * @dest: pointer to the destination buffer
 * @src: pointer to the memory to be copied
 * @n: number of bytes to copy
 * Return: A pointer to the concatenated string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int count;

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
