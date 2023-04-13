#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _calloc - allocates dynamic memory and initializes to 0
 * @nmemb: number of item type that should be allocated
 * @size: the size of each type
 * Return: pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;

	arr = NULL;
	if (nmemb == 0 || size = 0)
	{
		return (arr);
	}
	else
	{
		arr = malloc(size * nmemb);
		if (arr == NULL)
		{
			return (arr);
		}
		else
		{
			for (i = 0; i < (size * nmemb); i++)
			{
				arr[i] = 0;
			}
		}
		return (arr);
	}
}
