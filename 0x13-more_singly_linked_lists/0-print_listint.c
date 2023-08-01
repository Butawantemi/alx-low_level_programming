#include "lists.h"
#include <stdio.h>

/**
 * print_listint_recursive - helper function for recursive printing
 * @h: pointer to the current node in the list
 *
 * Return: number of nodes
 */
size_t print_listint_recursive(const listint_t *h)
{
    if (h == NULL)
        return 0;

    printf("%d\n", h->n);
    return 1 + print_listint_recursive(h->next);
}
size_t print_listint(const listint_t *h)
{
    return print_listint_recursive(h);
}

