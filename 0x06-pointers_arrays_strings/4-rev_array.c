#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the order of integers in an array
 * @a: pointer to the integer array
 * @n: number of integers in the array
 * Return: the reversed array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;
	int temp;
	int counter;

	counter = n - 1;

	for (i = 0; i < n - 1; i++)
	{
		for (j = 0; j < counter; j++)
		{
			temp = *(a + j);
			*(a + j) = *(a + j + 1);
			*(a + j + 1) = temp;
		}
		counter--;
	}
}
