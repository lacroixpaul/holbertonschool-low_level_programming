#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a list_t list.
 * @h : pointer to the first node.
 * Return: the number of elements.
 **/

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *element = h;

	while (element != NULL)
	{
		count++;
		element = element->next;
	}
	return (count);
}
