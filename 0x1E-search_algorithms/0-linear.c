#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array
 * @array: Pointer to the first element of the array
 * @size: Number of elements in an array
 * @value: Value to search for
 * Return: Index of value || -1 if not found
 */

int linear_search(int *array, size_t size, int value)
{
	size_t j = 0;

	/* check if the input array is NULL */
	if (array == NULL)
		return (-1);

	/* iterate through the array */
	for (j = 0; j < size; j++)
	{
		/* print the comparison being made */
		printf("Value checked array[%lu] = [%d]\n", j, array[j]);

		/* if value is found return the index */
		if (array[j] == value)
			return (j);
	}
	/* value not found in the array */
	return (-1);
}
