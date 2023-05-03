#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at a particular index
 * @head: pointer to the pointer of the head of node
 * @idx: the index at which the node should be inserted
 * @n: data that should be added in this node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newnode;
	listint_t *nextnode;
	unsigned int counter = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	else
	{
		if (idx == 0)
		{
			newnode = malloc(sizeof(listint_t));
			newnode->n = n;
			nextnode = *head;
			*head = newnode;
			newnode->next = nextnode;
			return (*head);
		}
		nextnode = *head;
		while (nextnode != NULL)
		{
			if (counter == (idx - 1))
			{
				newnode = malloc(sizeof(listint_t));
				newnode->n = n;
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
