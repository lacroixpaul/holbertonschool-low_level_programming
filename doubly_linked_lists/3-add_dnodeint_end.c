#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head : last element added.
 * @n : int to add.
 * Return: the address of the new element, or NULL if it failed.
 **/

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node;
	dlistint_t *pCurrent;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		pCurrent = *head;
			while (pCurrent->next != NULL)
			{
				pCurrent = pCurrent->next;
			}
		pCurrent->next = new_node;
		new_node->prev = pCurrent;
	}
	return (new_node);
}
