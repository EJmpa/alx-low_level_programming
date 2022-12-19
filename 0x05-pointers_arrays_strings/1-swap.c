#include "main.h"

/**
 * swap_int - A function that swaps integers
 * @a: Integer to be swapped
 * @b: Integer to be swapped
 * Return: nothing
 */

void swap_int(int *a, int *b)
{
	int c = *a;

	*a = *b;
	*b = c;
}
