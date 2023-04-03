#include <stdio.h>
#include "main.h"

/**
 * _memset - fills buffer space with a constant byte n times
 * @s: The pointer to the buffer to be filled
 * @b: The byte to fill buffer with
 * @n: Number of bytes to be written to the buffer
 * Return: A pointer to the buffer filled with n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int count;

	count = 0;
	while (count < n)
	{
		*(s + count) = b;
		count++;
	}
	return (s);
}
