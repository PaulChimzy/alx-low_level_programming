#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node at a particular index
 * @head: pointer to the pointer of the head of node
 * @index: the index at which the node should be inserted
 * Return: pointer to the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newnode;
	listint_t *nextnode;
	unsigned int counter = 0;

	if (head == NULL)
	{
		return (-1);
	}
	else
	{
		nextnode = *head;
		while (nextnode != NULL)
		{
			if (counter == (idx - 1))
			{
				newnode = malloc(sizeof(listint_t));
				newnode->next = nextnode->next;
				nextnode->next = newnode;
				return (newnode);
			}
			else
			{
				nextnode = nextnode->next;
				counter++;
			}

		}
	}
	return (NULL);
}
