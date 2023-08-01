#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
    if (*head == NULL)
    {
        listint_t *new = malloc(sizeof(listint_t));
        if (!new)
            return NULL;

        new->n = n;
        new->next = NULL;
        *head = new;
        return new;
    }

    return add_nodeint_end(&((*head)->next), n);
}
