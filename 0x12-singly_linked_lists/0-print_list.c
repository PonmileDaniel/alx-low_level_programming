#include <stdio.h>
#include "lists.h"

/**
 * print_list - This print all the element of a list
 * @h: pointer to the list 
 * Return: Return node
 */
size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %ss\n", h->len, h->str);
		}
		h = h->next;
		c++;
	}
	return (c);
}
