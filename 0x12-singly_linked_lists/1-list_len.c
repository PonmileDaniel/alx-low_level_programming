#include "lists.h"
#include <stdio.h>

/**
 * list_len - return the number of element in a linked list
 * @h: singly linked listy
 * Return: number of element in the list
 */
size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		h = h->next;
		c++;
	}
	return (c);
}
