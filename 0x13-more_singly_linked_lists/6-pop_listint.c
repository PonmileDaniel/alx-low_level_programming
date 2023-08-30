#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function deletes the head node
 * @head: Head
 * Return: The data inside the elements
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (!head || !*head)
	{
		return (0);
	}
	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
