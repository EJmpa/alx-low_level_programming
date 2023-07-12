#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array
 *                 using the Binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the first occurrence of the value,
 *         or -1 if value is not present or array is NULL
 */
int binary_search(int *array, size_t size, int value)
{
    int i, mid;
    int left = 0;
    int right = size - 1;

    if (array == NULL)
      return (-1);


	while (left <= right)
	{
		mid = (left + right) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
