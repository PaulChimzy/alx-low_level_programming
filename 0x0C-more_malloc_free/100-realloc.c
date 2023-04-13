#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _realloc - reallocates memory and copies contents
 * @ptr: pointer to the previous memory
 * @old_size: the size of the old memory
 * @new_size: the size of the new memory
 * Return: pointer to the newly allocated block or NULL otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *arr;
	unsigned int i;

	arr = NULL;
	if (ptr == NULL)
	{
		arr = malloc(new_size);
		return (arr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (arr);
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	else if (new_size > old_size || new_size < old_size)
	{
		arr = malloc(new_size);
		if (arr != NULL)
		{
			for (i = 0; i < old_size; i++)
			{
				*(arr + i) = *(ptr + i);
			}
			free(ptr);
			return (arr);
		}
		else
		{
			return (arr);
		}
	}
