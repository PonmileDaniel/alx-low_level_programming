#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Function that insert a new node
 * @head: Head of the node
 * @idx: index where new node is aded to
 * @n: Insert new node
 * Return: pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int i;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (i = 0; tmp && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		else
		{
			tmp = tmp->next;
		}
	}
	free(new);
	return (NULL);
}
