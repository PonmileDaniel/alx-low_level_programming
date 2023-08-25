#include <stddef.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly link lisy
 * @str: string
 * @len: length
 * @next: points to the next node in the linked list
 * Description: singly linked list node structure for Holberton project
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
