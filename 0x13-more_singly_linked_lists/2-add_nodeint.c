#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - Add a new node
 * @head: Head
 * @n: The integer
 * Return: Return NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add_new;

	add_new = malloc(sizeof(listint_t));

	if (add_new == NULL)
	{
		return (NULL);
	}

	add_new->n = n;
	add_new->next = *head;
	*head = add_new;

	return (add_new);
}
