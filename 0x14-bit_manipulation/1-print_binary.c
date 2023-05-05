#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <math.h>
/**
 * print_binary - prints the binary form of a decimal number
 * @n: decimal number to be converted to decimal
 * Return: the length of the string
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) + '0');
}
