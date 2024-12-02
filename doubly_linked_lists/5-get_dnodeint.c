#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* get_dnodeint_at_index - the nth node of a dlistint_t linked list.
* @head : last element added.
* @index :  is the index of the node, starting from 0
* Return: the nth node of a dlistint_t linked list.
 **/

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	return (head);
}
