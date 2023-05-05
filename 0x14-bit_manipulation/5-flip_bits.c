#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - flips a bit
 * @n: number from which a bit is to be cleared
 * @index: the index of the bit to be cleared
 * Return: 1 if everything works fine and 0 otherwise
 */
int flip_bits(unsigned long int n, unsigned int index)
{
	unsigned long int manipulate = n ^ index;
	unsigned long int bits = 0;

	while (manipulate > 0)
	{
		bits += (manipulate & 1);
		manipulate >>= 1;
	}
	return (bits);
}
