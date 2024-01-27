#include "lists.h"
/**
 * delete_dnodeint_at_index - delete the node
 * @head: head of the list
 * @index: index of the new node
 * Return: 1 if it successful, -1 if not
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *curr = *head;
	unsigned int i;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		*head = curr->next;

		if (*head != NULL)
			(*head)->prev = NULL;
		free(curr);
		return (1);
	}
	for (i = 0; i < index && curr != NULL; i++)
	{
		curr = curr->next;
	}
	if (curr == NULL)
	{
		return (-1);
	}
	if (curr->prev != NULL)
	{
		curr->next->prev = curr->prev;
	}
	free(curr);
	return (1);
}
