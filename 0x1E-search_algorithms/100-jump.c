#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array using Jump search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value,
 *         or -1 if value is not present or array is NULL
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size);
	size_t prev = 0;
	size_t curr = 0;

	if (array == NULL)
		return (-1);

	while (array[curr] < value)
	{
		prev = curr;
		curr += step;

		if (prev >= size)
			return (-1);

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
	}

	printf("Value found between indexes [%lu] and [%lu]\n", prev, curr);

	while (prev <= curr)
	{
		if (prev >= size)
			return (-1);

		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);

		if (array[prev] == value)
			return (prev);

		prev++;
	}

	return (-1);
}
