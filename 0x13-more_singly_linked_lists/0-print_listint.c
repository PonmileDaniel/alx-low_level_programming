#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints all the element of a listint_t list.
 * @h: Apointer to the head of the list
 * Return: The number of node
 */

size_t print_listint(const listint_t *h)
{
	size_t node = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		node++;
		h = h->next;
	}

	return (node);
}

