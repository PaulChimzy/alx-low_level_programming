#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - adds node to the end of a linked list
 * of elements in the list
 * @head: *pointer to the pointer of a node
 * @str: string as a value to the linked list
 * Return: pointer to the head node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str1 = strdup(str);
	int str_len = strlen(str1);
	list_t *nextNode;

	if (head == NULL)
		return (NULL);

	if (*head == NULL)
	{
		(*head) = malloc(sizeof(list_t));
		if (*head != NULL)
		{
			(*head)->len = str_len;
			(*head)->str = str1;
			(*head)->next = NULL;
		}
		else
			return (NULL);
	}
	else
	{
		nextNode = *head;
		while (nextNode != NULL)
		{
			if (nextNode->next == NULL)
			{
				nextNode->next = malloc(sizeof(list_t));
				if (nextNode->next != NULL)
				{
					nextNode->next->len = str_len;
					nextNode->next->str = str1;
					nextNode->next->next = NULL;
					break;
				}
				else
					return (NULL);
			}
			nextNode = nextNode->next;
		}
	}
	return (*head);
}
