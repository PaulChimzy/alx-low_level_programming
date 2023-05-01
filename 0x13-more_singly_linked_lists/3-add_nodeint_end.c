#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - add a node at the end of the linked list
 * @head: pointer to the pointer if the head node
 * @n: value to be stored in the new node added
 * Return: pointer to the new node added
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextnode;
	listint_t *newnode;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		if (*head == NULL)
			return (NULL);
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		nextnode = (*head);
		while (1)
		{
			if (nextnode->next == NULL)
			{
				newnode = malloc(sizeof(listint_t));
				if (newnode == NULL)
					return (NULL);
				newnode->n = n;
				newnode->next = NULL;
				nextnode->next = newnode;
				/* free(nextnode);*/
				return (newnode);
			}
			nextnode = nextnode->next;
		}

	}
	return (*head);
}
