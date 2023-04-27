#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - determine the length of a string
 * @s: pointer to the string (array of characters)
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int count;

	count = 0;
	while (*(s + count) != '\0')
	{
		count++;
	}
	return (count);
}

/**
 * add_node_end - add node at the end of the linked list
 * of elements in the list
 * @h: head pointer
 * Return: number of elements in the linked list
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *str1 = strdup(str);
	int str_len = _strlen(str1);
	list_t *second_node;
	list_t *new_node;

	if ((*head) == NULL)
	{
		head = &new_node;
		printf("Got here %d\n", str_len);
		new_node->len = str_len;
		printf("Got here %d\n", str_len);
		new_node->str = str1;
		new_node->next = NULL;
		printf("Got here %d\n", str_len);
		head = &new_node;
		printf("Got here %d\n", str_len);
	}
	else
	{
		second_node = (*head);
		head = &new_node;
		(*head)->len = str_len;
		(*head)->str = str1;
		(*head)->next = second_node;
	}
	return (NULL);
}
