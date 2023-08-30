#include "lists.h"
#include <stdlib.h>
/**
 * delete_nodeint_at_index - delete node
 * @head: Head
 * @index: index
 * Return: int
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp =  *head;
	unsigned int i = 0;
	listint_t *current = NULL;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		i++;
	}
	current = tmp->next;
	tmp->next = current->next;
	free(current);

	return (1);
}

