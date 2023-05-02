#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint2 - frees up memory consumed by a linked list
 * and sets the head to null
 * @head: pointer to a pointer of the linked list
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *nextnode;
	listint_t *tempnode;

	if (head == NULL)
	{
		return;
	}
	else
	{
		nextnode = *head;
		while (nextnode != NULL)
		{
			if (nextnode->next == NULL)
			{
				free(nextnode);
				break;
			}
			else
			{
				tempnode = nextnode->next->next;
				free(nextnode->next);
				nextnode = tempnode;
				free(tempnode);
			}
		}
		*head = NULL;
	}
}
