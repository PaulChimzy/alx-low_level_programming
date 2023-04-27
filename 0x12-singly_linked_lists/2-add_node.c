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
 * add_node - adds node to the beginning of a linked list
 * of elements in the list
 * @head: *pointer to the pointer of a node
 * @str: string as a value to the linked list
 * Return: pointer to the head node
 */
list_t *add_node(list_t **head, const char *str)
{
	char *str1 = strdup(str);
	int str_len = _strlen(str1);
	list_t *second_node;

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
		{
			return (NULL);
		}
	}
	else
	{
		second_node = (*head);
		(*head) = malloc(sizeof(list_t));
		if (*head != NULL)
		{
			(*head)->len = str_len;
			(*head)->str = str1;
			(*head)->next = second_node;
		}
		else
		{
			return (NULL);
		}
	}
	return (*head);
}
