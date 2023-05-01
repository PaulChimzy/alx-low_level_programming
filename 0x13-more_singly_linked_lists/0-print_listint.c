#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: linked list of nodes
 * Return: the number of nodes in the linked list
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *node = h;

	if (h == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		counter++;
	}
	return (counter);
}
