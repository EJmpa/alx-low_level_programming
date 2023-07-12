#include "search_algos.h"

/**
 * interpolation_search - Searches for a value in a sorted array of integers
 *                        using the Interpolation search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value,
 *         or -1 if value is not present or array is NULL
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t low = 0, high = size - 1, pos;

	if (array == NULL || size == 0)
		return (-1);

	while (low <= high && value >= array[low] && value <= array[high])
	{
<<<<<<< HEAD
		if (low == high)
		{
			if (array[low] == value)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));

=======
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			* (value - array[low]));
>>>>>>> 9ccedb254df408df3c42d81a4e83a0ef44b5e658
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);

		if (array[pos] == value)
			return (pos);

		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}

	printf("Value checked array[%lu] is out of range\n", pos);
	return (-1);
}
