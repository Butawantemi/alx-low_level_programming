#include "lists.h"
#include <stdlib.h>

/**
* free_listint - frees a linked list
* @head: listint_t list to be freed
*/
void free_listint(listint_t *head)
{
if (head == NULL)
return;
if (head->next != NULL) {
free_listint(head->next);
}
free(head);
}
