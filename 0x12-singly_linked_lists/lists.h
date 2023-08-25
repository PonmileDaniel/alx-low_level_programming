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

#endif
