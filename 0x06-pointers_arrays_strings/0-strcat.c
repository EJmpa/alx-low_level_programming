#include "main.h"
#include <stdio.h>


/**
 * _strcat - Concatenates two strings
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the resulting string dest
 */

char *_strcat(char *dest, char *src)
{
	int dlen = 0, index;

	while (dest[dlen])
	{
		dlen++;
	}

	for (index = 0; src[index] != 0; i++)
	{
		dest[dlen] = src[index];
		dlen++;
	}

	dest[dlen] = '\0';

	return (dest);
}
