#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - frees up memory consumed by a linked list
 * @head: pointer to the linked list
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *nextnode;
	listint_t *tempnode;

	if (head == NULL)
	{
		return;
	}
	else
	{
		nextnode = head;
		while (nextnode != NULL)
		{
			if (nextnode->next == NULL)
			{
				free(nextnode->n);
				free(nextnode);
			}
			else
			{
				tempnode = nextnode->next->next;
				free(nextnode->n);
				free(nextnode->next);
				nextnode = tempnode;
				free(tempnode);
			}
		}
		free(head);
	}
}
