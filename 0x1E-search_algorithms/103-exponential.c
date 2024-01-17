#include "search_algos.h"

/**
 * _binary_search - searches for the value to be sorted
 * @array: array of integers
 * @left: left of element
 * @right: right of element
 * @value: value to search for
 * Return: -1 if not found || index of value
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
