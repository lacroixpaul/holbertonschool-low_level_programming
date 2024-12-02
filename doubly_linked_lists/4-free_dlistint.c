#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* free_dlistint - free a listint_t list.
* @head : last element added.
* Return: the address of the new element, or NULL if it failed.
 **/

void free_dlistint(dlistint_t *head)
{
	dlistint_t *pCurrent;

	while (head != NULL)
	{
		pCurrent = head;
		head = head->next;
		free(pCurrent);
	}
}
