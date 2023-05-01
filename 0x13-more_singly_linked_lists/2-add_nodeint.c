#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - add a node at the beginning of the new linked list
 * @head: pointer to the pointer if the head node
 * @n: value to be stored in the new node added
 * Return: pointer to the new node added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	if (*head == NULL)
	{
		*head = malloc(sizeof(listint_t));
		(*head)->n = n;
		(*head)->next = NULL;
	}
	else
	{
		newnode = malloc(sizeof(listint_t));
		newnode->n = n;
		newnode->next = *head;
		*head = newnode;
	}
	return (*head);
}
