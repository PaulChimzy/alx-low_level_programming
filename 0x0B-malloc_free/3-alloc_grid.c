#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * alloc_grid - creates a 2-dimensional array
 * @width: number of integers per array
 * @height: number of arrays
 * Return: pointer to two-dim array
 */
int **alloc_grid(int width, int height)
{
	int **arr_pt;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		arr_pt = NULL;
		return (arr_pt);
	}

	arr_pt = malloc(sizeof(int *) * height);
	if (arr_pt != NULL)
	{
		for (i = 0; i < height; i++)
		{
			arr_pt[i] = malloc(sizeof(int) * width);
			if (arr_pt[i] == NULL)
			{
				for (j = 0; j <= i; j++)
				{
					free(arr_pt[j]);
				}
				free(arr_pt);
				return (arr_pt);
			}
		}
		for (i = 0; i < height; i++)
		{
			for (j = 0; j < width; j++)
			{
				arr_pt[i][j] = 0;
			}
		}
	}
	else
	{
		free(arr_pt);
	}
	return (arr_pt);
}
