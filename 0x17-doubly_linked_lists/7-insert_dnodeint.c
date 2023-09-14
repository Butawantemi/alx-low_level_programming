#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a dlistint_t list.
 * @h: pointer to a pointer to the head of the doubly-linked list.
 * @idx: the index where the new node should be added (starting from 0).
 * @n: value to be stored in the new node.
 * Return: the address of the new node, or NULL if it failed.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
dlistint_t *new_node, *current;
unsigned int i = 0;
if (h == NULL)
return (NULL);
new_node = malloc(sizeof(dlistint_t));
if (new_node == NULL)
return (NULL);
new_node->n = n;
new_node->prev = NULL;
new_node->next = NULL;
if (idx == 0)
{
if (*h != NULL)
{
new_node->next = *h;
(*h)->prev = new_node;
}
*h = new_node;
return (new_node);
}
current = *h;
while (current != NULL)
{
if (i == idx - 1)
{
new_node->next = current->next;
if (current->next != NULL)
current->next->prev = new_node;
current->next = new_node;
new_node->prev = current;
return (new_node);
}
current = current->next;
i++;
}
free(new_node);
return (NULL);
}
