#include <stdio.h>
#include "main.h"

/**
 * print_array - prints elements from an array
 * @a: pointer to the string (array of characters)
 * @n: number of characters to be printed
 * Return: the length of the string
 */

void print_array(int *a, int n)
{
	int count;

	count = 0;
	while (*(a + count) != '\0' && count < n)
	{
		printf("%d", *(a + count));
		if (count != n - 1)
		{
			printf(", ");
			count++;
			continue;
		}
		count++;
	}
	printf("\n");
}
