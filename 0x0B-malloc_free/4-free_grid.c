#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * free_grid - frees up a 2-dimensional grid created by using malloc
 * @grid: pointer array holding the 2-d array
 * @height: number of arrays in the 2-d array
 * Return: nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
