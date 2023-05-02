#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums all the data in a linked list
 * @head: pointer to the head of node
 * Return: sum of all the data in list
 */
int sum_listint(listint_t *head)
{
	listint_t *newnode;
	int total = 0;

	if (head == NULL)
	{
		return (0);
	}
	else
	{
		newnode = head;
		while (newnode != NULL)
		{
			total += newnode->n;
			newnode = newnode->next;
		}
	}
	return (total);
}
