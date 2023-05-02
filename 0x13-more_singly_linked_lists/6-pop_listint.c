#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * pop_listint - deletes the headnode of a linked list
 * @head: pointer to the pointer of the head node
 * Return: the data in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *newnode;
	int n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		newnode = *head;
		n = (*head)->n;
		*head = newnode->next;
		/*free((*head)->next);
		*head = &newnode.next;
		free(newnode.next);*/
		free(newnode);
	}
	return (n);
}
