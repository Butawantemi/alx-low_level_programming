#include <stdio.h>
#include <stdlib.h>

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list.
 * @head: Pointer to a pointer to the head node of the list.
 * @n: Integer data for the new node.
 *
 * Return: The address of the new element (new node), or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
    listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
    if (new_node == NULL)
    {
        /* Failed to allocate memory for the new node */
        return NULL;
    }

    new_node->n = n;
    new_node->next = *head;
    *head = new_node;

    return new_node;
}

