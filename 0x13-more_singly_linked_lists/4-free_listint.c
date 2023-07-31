#include <stdlib.h>
/**
 * free_listint - frees a linked list
 * @head: listint_t list to be freed
 */

typedef struct listint_t {
int n;
struct listint_t *next;
} listint_t;

void free_listint(listint_t *head)
{
listint_t *temp;
while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}

