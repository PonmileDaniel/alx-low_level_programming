#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free int
 * @head: Head
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *fress;

	if (head == NULL)
	{
		return;
	}
	while (*head)
	{
		fress = (*head)->next;
		free(*head);
		*head = fress;
	}

	head = NULL;
}
