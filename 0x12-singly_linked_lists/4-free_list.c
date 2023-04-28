#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_list - freesall memory of a linked list
 * of elements in the list
 * @head: head pointer
 * Return: none
 */
void free_list(list_t *head)
{
	list_t *nextnode = head;
	list_t *temp;

	if (head == NULL)
	{
		return;
	}

	while (nextnode != NULL)
	{
		/*
		* if (nextnode->str != NULL)
		*	printf("[%d] %s\n", nextnode->len, nextnode->str);
		* else
		*	printf("[0] (nil)\n");
		*/
		free(nextnode->str);
		temp = nextnode->next;
		free(nextnode->next);
		nextnode = temp;
		free(temp);
	}
	free(head);
	free(nextnode);
}
