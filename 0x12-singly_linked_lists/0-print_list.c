#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints the elements in a linked list and number
 * of elements in the list
 * @h: head pointer
 * Return: number of elements in the linked list
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;
	const list_t *nextnode = h;

	if (h == NULL)
	{
		return (0);
	}

	while (nextnode != NULL)
	{
		if (nextnode->str != NULL)
			printf("[%d] %s\n", nextnode->len, nextnode->str);
		else
			printf("[0] (nil)\n");

		nextnode = nextnode->next;
		counter++;
	}
	return (counter);
}
