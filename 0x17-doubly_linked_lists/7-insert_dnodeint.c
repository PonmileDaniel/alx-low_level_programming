#include "lists.h"

/**
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));
	unsigned int i;

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->prev = NULL;
		new_node->next = *h;

		if (*h != NULL)
		{
			(*h)->prev = new_node;
		}
		*h = new_node;
	}
	else
	{
		dlistint_t *curr = *h;

		for (i = 0; i < idx - 1 && curr != NULL; i++)
		{
			curr = curr->next;
		}
		if (curr == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->prev = curr;
		new_node->next = curr->next;

		if (curr->next != NULL)
		{
			curr->next->prev = new_node;
		}
		curr->next = new_node;
	}
	return (new_node);
}
