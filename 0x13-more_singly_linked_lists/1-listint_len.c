#include "lists.h"
#include <stddef.h>

/**
 * listint_len_recursive - helper function for recursive counting
 * @h: pointer to the current node in the list
 *
 * Return: number of nodes
 */
size_t listint_len_recursive(const listint_t *h)
{
    if (h == NULL)
        return 0;

    return 1 + listint_len_recursive(h->next);
}
size_t listint_len(const listint_t *h)
{
    return listint_len_recursive(h);
}

