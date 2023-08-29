#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint_end - adds a new node at tje end of the list
 * @head: Head
 * @n: Integer
 * Return: fail-Null
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_new, *add_last;

	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
	{
		return (NULL);
	}
	add_new->n = n;
	add_new->next = NULL;

	if (!*head)
	{
		*head = add_new;
	}
	else
	{
		add_last = *head;
		while (add_last->next != NULL)
		{
			add_last = add_last->next;
		}
		add_last->next = add_new;
	}
	return (*head);
}
