#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head : last element added.
 * @str : str to add.
 * Return: the address of the new element, or NULL if it failed.
 **/

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	int count = 0;
	list_t *pCurrent;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);

	new_node->str = strdup(str);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	while (str[count] != '\0')
	{
		count++;
	}
	new_node->len = count;
	new_node->next = NULL;
	if (*head == NULL)
		*head = new_node;
	else
	{
		pCurrent = *head;
			while (pCurrent->next != NULL)
			{
				pCurrent = pCurrent->next;
			}
		pCurrent->next = new_node;
	}
	return (new_node);
}
