#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - searches an array for an integer
 * @array: pointer to the array
 * @size: size of the array
 * @cmp: pointer to the function for finding out if number
 * Return: return index in the array of number being searched
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != NULL && size != 0 && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(*(array + i)) != 0)
			{
				return (i);
			}
			else
			{
				continue;
			}
		}
	}
	return (-1);
}
