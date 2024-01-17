#include "search_algos.h"


/**
 * advanced_binary_recursive - Performs recursive binary search
 * @array: Pointer to the first element
 * @right: Starting index
 * @left: Ending index
 * @value: Value to search for
 * Return: -1 || Index where value is located
 */

int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] == value && (j == left || array[j - 1] != value))
		return (j);
	if (array[j] >= value)
		return (advanced_binary_recursive(array, left, j, value));
	return (advanced_binary_recursive(array, j + 1, right, value));
}

/**
 * advanced_binary - Searches a value in a sorted array of intergers
 * @array: Pointer to the first element of the array
 * @size: Number of elements in array
 * @value: Value to search for
 * Return: -1 || value
 */

int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
