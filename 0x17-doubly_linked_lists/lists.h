#ifndef _LISTS_
#define _LISTS_

#include <stdio.h>
#include <stdlib.h>

typedef struct dlistint_t
{
    int n;
    struct dlistint_t *prev;
    struct dlistint_t *next;
} dlistint_t;


size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);


#endif /* _LISTS_ */
