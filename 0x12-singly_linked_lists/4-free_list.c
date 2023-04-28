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

	if (head == NULL)
	{
		return (0);
	}

	while (nextnode != NULL)
	{
		/*
		* if (nextnode->str != NULL)
		*	printf("[%d] %s\n", nextnode->len, nextnode->str);
		* else
		*	printf("[0] (nil)\n");
		*/
		free(nextnode->len);
		free(nextnode->str);

		nextnode = nextnode->next;
	}
}
