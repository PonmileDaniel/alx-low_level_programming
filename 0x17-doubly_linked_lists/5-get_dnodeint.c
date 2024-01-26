#include "lists.h"

/**
 * get_dnodeint_at_index - return nth node
 * @head: head of the list
 * @index: index of the nth node
 * Return: nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL && count < index)
	{
		head = head->next;
		count++;
	}
	if (count == index)
	{
		return (head);
	}
	else
	{
		return (NULL);
	}
}
