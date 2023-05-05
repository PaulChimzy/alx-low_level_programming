#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * get_bit - prints the binary form of a decimal number
 * @n: decimal number to be converted to decimal
 * @index: the index of the bit to be retrieved
 * Return: the length of the string
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1 << index)) == 0)
		return (0);
	return (1);
}
