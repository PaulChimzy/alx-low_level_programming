#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of diagonal numbers in a square of numbers
 * @a: pointer to an an array of pointers
 * @size: size of the square
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j;
	int sum1;
	int sum2;

	sum1 = 0;
	sum2 = 0;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
			{
				sum1 += a[i + j];
			}
			if (i + j == size - 1)
			{
				sum2 += a[i + j];
			}
		}
	}
	printf("%d, %d\n", sum1, sum2);
}
