#include "main.h"

/**
 * _strlen - A function that returns length of a string
 * @s: the string
 *
 * Return: 0.
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}
