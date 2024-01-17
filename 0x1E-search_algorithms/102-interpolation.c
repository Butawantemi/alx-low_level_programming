#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array
 * @array: Pointer to the first element of the array
 * @size: The number of elements in an array
 * @value: The value to search for
 * Return: First index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t j, l, r;

	if (array == NULL)
		return (-1);

	for (l = 0, r = size - 1; r >= l;)
	{
		j = l + (((double)(r - l) / (array[r] - array[l])) * (value - array[l]));
		if (j < size)
			printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", j);
			break;
		}

		if (array[j] == value)
			return (j);
		if (array[j] > value)
			r = j - 1;
		else
			l = j + 1;
	}

	return (-1);
}
