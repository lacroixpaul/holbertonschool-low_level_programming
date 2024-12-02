#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* insert_dnodeint_at_index -  inserts a new node at a given position.
* @h : double pointer to the head of list.
* @idx : index of the list where the new node should be added, starts at 0
* @n : value to add.
* Return: the address of the new node, or NULL if it failed
 **/

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *element = *h;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}

	while (element != NULL && count < idx - 1)
	{
		element = element->next;
		count++;
	}
	if (element == NULL)
	return (NULL);

	new_node->next = element->next;
	new_node->prev = element;
	if (element->next != NULL)
		element->next->prev = new_node;
	element->next = new_node;
return (new_node);
}
