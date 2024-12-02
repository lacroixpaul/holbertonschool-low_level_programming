#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list.
 * @h : pointer to the first node.
 * Return: the number of nodes.
 **/

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *element = h;

	while (element != NULL)
	{
		if (element->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", element->len, element->str);
		count++;
		element = element->next;
	}
	return (count);
}
