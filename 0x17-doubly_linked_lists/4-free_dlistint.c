#include "lists.h"
/**
 * free_dlistint - free list
 * @head: head of list
 * Return: no return
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *curr = head;
	dlistint_t *next;

	while (curr != NULL)
	{
		next = curr->next;
		free(curr);
		curr = next;
	}
}
