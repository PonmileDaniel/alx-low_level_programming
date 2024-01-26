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

#endif /* _LISTS_ */
