#include "lists.h"
#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>

/**
 * free_list - free a list_t
 * @head: head 
 * Return: no return
 */

void free_list(list_t *head)
{
	list_t *tem;

	while (head != NULL)
	{
		tem = head->next;
		head = tem;
		free(head->str);
		free(head);
	}
}
