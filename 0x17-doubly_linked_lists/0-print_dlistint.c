#include "lists.h"
/**
* print_dlistint - print all element of the dlistint
* @h: head of the list
* Return: To return the number of node
*/
size_t print_dlistint(const dlistint_t *h)
{
    int count;
    count = 0;

    if (h == NULL)
        return (count);
    while (h != NULL)
    {
        printf("%d\n", h->n);
        count++;
        h = h->next;
    }
    return (count);
}