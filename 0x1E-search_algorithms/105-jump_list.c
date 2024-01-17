#include "search_algos.h"

/**
 * jump_list - searches for a value in a sorted list using Jump search.
 * @list: pointer to the head of the list.
 * @size: number of nodes in the list.
 * @value: the value to search.
 *
 * Return: a pointer to the first node where the value is located, or NULL if
 * the value is not found or if the list is NULL.
 */

listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, step_size;
	listint_t *node, *jum;

	if (list == NULL || size == 0)
		return (NULL);

	step = 0;
	step_size = sqrt(size);
	for (node = jum = list; jum->index + 1 < size && jum->n < value;)
	{
		node = jump;
		for (step += step_size; jum->index < step; jum = jum->next)
		{
			if (jum->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jum->index, jum->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
		   node->index, jum->index);

	for (; node->index < jum->index && node->n < value; node = node->next)
		printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);
	printf("Value checked at index [%ld] = [%d]\n", node->index, node->n);

	return (node->n == value ? node : NULL);
}
