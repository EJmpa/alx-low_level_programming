#include "main.h"

/**
 * puts_half - a function that prints half of a string,
 * starting with the first character, followed by a new line.
 * @str: An input string
 * Return: Nothing
 */

void puts_half(char *str)
{
	int len = 0, i = 0, h;

	while (str[len] != '\0')

		len++;

	if (len % 2 == 0)

		h = len / 2;

	else
		h = (len + 1) / 2;

	for (; i < h; i += 1)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
