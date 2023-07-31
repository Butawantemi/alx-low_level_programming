#include <stdlib.h>

/**
* free_listint2 - Frees a listint_t list and sets the head to NULL.
* @head: A pointer to a pointer to the head of the list to be freed.
*
*/

typedef struct listint_t {
int n;
struct listint_t *next;
} listint_t;

void free_listint2(listint_t **head)
{
listint_t *temp;
while (*head != NULL)
{
temp = (*head)->next;
free(*head);
*head = temp;
}
*head = NULL;
}

