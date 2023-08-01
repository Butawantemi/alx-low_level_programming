#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint_recursive - helper function for recursive insertion
 * @head: pointer to the current node in the list
 * @n: data to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_recursive(listint_t *head, const int n)
{
    if (head == NULL)
    {
        listint_t *new = malloc(sizeof(listint_t));
        if (!new)
            return NULL;

        new->n = n;
        new->next = NULL;
        return new;
    }

    head->next = add_nodeint_recursive(head->next, n);
    return head;
}

listint_t *add_nodeint(listint_t **head, const int n)
{
    *head = add_nodeint_recursive(*head, n);
    return *head;
}
