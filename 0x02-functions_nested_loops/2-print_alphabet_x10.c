#include "main.h"

/**
 * print_alphabet_x10 - prints out alphabets in lowercase followed by new line
 *
 * Return void
 */

void print_alphabet_x10(void)

{
	char letter;

	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)

			_putchar(letter);

		_putchar('\n');
	}
}
