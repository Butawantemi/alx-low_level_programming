#include <stddef.h>

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
 * listint_len - Returns the number of elements in a linked list.
 * @h: Pointer to the head node of the linked list.
 *
 * Return: The number of elements in the linked list.
 *
 * Description: This function calculates the number of elements in a linked list
 *              of type listint_t. It traverses the linked list starting from
 *              the head node (given by @h) and counts the number of elements
 *              until the end of the list is reached. The function returns the
 *              total number of elements in the linked list.
 */
size_t listint_len(const listint_t *h)
{
    size_t count = 0;
    const listint_t *current = h;

    while (current != NULL)
    {
        count++;
        current = current->next;
    }

    return count;
}

