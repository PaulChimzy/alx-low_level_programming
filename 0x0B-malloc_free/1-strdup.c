#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - creates a dynamic memory and stores the copy of a pointer
 * @str: pointer to the string to be duplicated in memory
 * Return: pointer to the copy of the string
 */
char *_strdup(char *str)
{
	int size;
	char *arr;
	int i;

	size = 0;
	if (str == NULL)
	{
		arr = NULL;
	}
	else
	{
		while (*(str + size) != '\0')
		{
			size++;
		}
		if (size == 0)
		{
			arr = NULL;
		}
		else
		{
			arr = malloc(sizeof(char) * size);
			for (i = 0; i < size; i++)
			{
				arr[i] = *(str + i);
			}
		}
	}
}
