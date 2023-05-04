#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include<string.h>
/**
 * rev_string - reverses a string and prints to the stout
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */
void rev_string(char *s)
{
	int count;
	char temp;
	int counter;
	int i;
	int j;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	count--;
	counter = count;

	for (i = 0; i < count; i++)
	{
		for (j = 0; j < counter; j++)
		{
			temp = *(s + j);
			*(s + j) = *(s + j + 1);
			*(s + j + 1) = temp;
		}
		counter--;
	}
}
/**
 * binary_to_uint - converts binary to decimal
 * @b: pointer to the string containig bits
 * Return: the decimal number
 */
unsigned int binary_to_uint(const char *b)
{
	char *rb = strdup(b);
	unsigned int decimal = 0;
	int counter = 1;
	int count = 0;

	rev_string(rb);
	if (b == NULL)
	{
		return (0);
	}
	while (*(rb + count) != '\0')
	{
		if (*(rb + count) != '1' && *(rb + count) != '0')
		{
			return (0);
		}
		else
		{
			if (*(rb + count) == '1')
			{
				decimal += counter;
				counter *= 2;
			}
			else
			{
				counter *= 2;
			}
		}
		count++;
	}
	return (decimal);
}
