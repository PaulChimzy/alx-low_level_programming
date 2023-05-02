#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * get_nodeint_at_index - get the node at a given index
 * @head: pointer to the head of node
 * @index: the index of the node to return
 * Return: pointer to the node at this index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newnode;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	else
	{
		newnode = head;
		while (newnode != NULL)
		{
			if (counter == index)
			{
				return (newnode);
			}
			else
			{
				newnode = newnode->next;
				counter++;
			}

		}
	}
	return (NULL);
}
