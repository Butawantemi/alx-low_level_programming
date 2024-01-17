#include "search_algos.h"

/**
 * _binary_search - Searches for the value to be sorted
 * @array: Array of integers
 * @left: Left of element
 * @right: Right of element
 * @value: Value to search 
 * Return: -1 if not found || Index of value
 */

int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	while (right >= left)
	{
		printf("Searching in array: ");
		for (j = left; j < right; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = left + (right - left) / 2;
		if (array[j] == value)
			return (j);
		if (array[i] > value)
			right = j - 1;
		else
			left =  j + 1;
	}

	return (-1);
}
