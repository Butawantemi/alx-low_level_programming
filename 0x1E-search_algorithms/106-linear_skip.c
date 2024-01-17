#include "search_algos.h"

/**
 * linear_skip - Searches for a value in a sorted skip list of intergers
 * @list: Pointer to the head of the skip
 * @value: Value to search for
 * Return: Pointer to the first node
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *node, *jum;

	if (list == NULL)
		return (NULL);

	for (node = jum = list; jum->next != NULL && jum->n < value;)
	{
		node = jum;
		if (jum->express != NULL)
		{
			jum = jum->express;
			printf("Value checked at index [%ld] = [%d]\n",
				   jum->index, jump->n);
		}
		else
		{
			while (jum->next != NULL)
				jum = jum->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jum->index);

	for (; node->index < jum->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
