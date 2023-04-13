#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * array_range - create in memory an array of integers arranged accourdingly
 * @min: minimum integer
 * @max: maximum integer
 * Return: pointer to memory block containing integer or NULL if function fails
 */
int *array_range(int min, int max)
{
	int *arr;
	int i;
	int block_size;

	arr = NULL;
	block_size = 0;
	if (min > max)
		return (arr);
	block_size = max - min + 1;
	arr = malloc(sizeof(int) * block_size);
	if (arr == NULL)
		return (arr);
	else
	{
		for (i = 0; i < block_size; i++)
		{
			*(arr + i) = min + i;
		}
		return (arr);
	}
}
