#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* delete_dnodeint_at_index - deletes the node at index of a linked list.
* @head : double pointer to the last element.
* @index :  is the index of the node, starting from 0.
* Return: 1 if it succeeded, -1 if it failed.
 **/

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *pCurrent = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = pCurrent->next;
		if (*head != NULL)
		(*head)->prev = NULL;
		free(pCurrent);
		return (1);
	}
	while (pCurrent != NULL && count < index)
	{
		pCurrent = pCurrent->next;
		count++;
	}
	if (pCurrent == NULL)
		return (-1);
	if (pCurrent->next != NULL)
		pCurrent->next->prev = pCurrent->prev;
	if (pCurrent->prev != NULL)
		pCurrent->prev->next = pCurrent->next;
	free(pCurrent);
	return (1);
}
