#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * listint_len - counts the number of nodes in a linked list
 * @h: linked list of nodes
 * Return: the number of nodes in the linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;
	const listint_t *node = h;

	if (h == NULL)
	{
		return (0);
	}
	while (node != NULL)
	{
		node = node->next;
		counter++;
	}
	return (counter);
}
