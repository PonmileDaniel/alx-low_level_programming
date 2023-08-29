#include "lists.h"

/**
 * free_listint - free a list
 * @head: Head
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *frees;

	while (head)
	{
		frees = head;
		head = frees->next;
		free(frees);
	}
}
