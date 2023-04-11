#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * create_array - creates an array of a given size using malloc
 * @size: size of the array to be created
 * @c: the character to be initialized
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *arr;

	if (size == 0)
	{
		arr = NULL;
	}
	else if (size > 0)
	{
		arr = malloc(sizeof(char) * size);
		if (arr != NULL)
		{
			arr[0] = c;
		}
	}
	return (arr);
}
