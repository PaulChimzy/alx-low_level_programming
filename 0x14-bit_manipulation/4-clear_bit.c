#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * set_bit - sets a bit to 0 at an index
 * @n: number from which a bit is to be set
 * @index: the index of the bit to be set
 * Return: 1 if everything works fine and 0 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n & ~(1 << index);
	return (1);
}
