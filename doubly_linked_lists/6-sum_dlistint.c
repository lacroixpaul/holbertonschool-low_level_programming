#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
* sum_dlistint - returns the sum of all the data of a dlistint_t linked list.
* @head : last element added.
* Return: the sum or 0 if the list is empty.
 **/

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *element = head;

	if (element == NULL)
	{
		return (0);
	}
	else
	{
		while (element != NULL)
		{
		sum += element->n;
		element = element->next;
		}
	}
return (sum);
}
