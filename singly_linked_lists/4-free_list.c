#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - free a list_t list.
 * @head : last element added.
 * Return: nothing.
 **/

void free_list(list_t *head)
{
	list_t *pCurrent;

	while (head != NULL)
	{
		pCurrent = head;
		head = head->next;
		free(pCurrent->str);
		free(pCurrent);
	}
}
