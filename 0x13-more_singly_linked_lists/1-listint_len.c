#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Return the no of element
 * @h: linked list
 *
 * Return: number of the nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		h = h->next;
		node++;
	}


	return (node);
}
