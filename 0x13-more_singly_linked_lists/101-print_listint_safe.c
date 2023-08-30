#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - This function that prints a linked list
 * @head: Pointer at the head
 * Return: return if 0
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *quick, *sluggish;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
	{
		return (0);
	}
	sluggish = head->next;
	quick = (head->next)->next;

	while (quick)
	{
		if (sluggish == quick)
		{
			sluggish = head;
			while (sluggish != quick)
			{
				nodes++;
				sluggish = sluggish->next;
				quick = quick->next;
			}
			sluggish = sluggish->next;
			while (sluggish != quick)
			{
				nodes++;
				sluggish = sluggish->next;
			}
			return (nodes);
		}
		sluggish = sluggish->next;
		quick = (quick->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - prints a listint_t list
 * @head: Head
 * Return: The number of node in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, i = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < node; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
