#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees a linked list
 * @head: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	if (head == NULL || *head == NULL)
		return;

	if ((*head)->next != NULL) {
		free_listint2(&((*head)->next));
	}

	free(*head);
	*head = NULL;
}
