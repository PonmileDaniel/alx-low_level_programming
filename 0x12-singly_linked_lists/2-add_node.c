#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
/**
 * add_note - This a function that adds a new node at the beginning
 * @head: head of the linked list
 * @str: string
 * Return: Adress
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int length = 0;

	for (length = 0; str[length]; length++)

	new = malloc(sizeof(list_t));

	if (!new)
	{
		return (NULL);
	}
	new->str = strdup(str);
	new->len = length;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
