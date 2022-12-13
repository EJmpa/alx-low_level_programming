#include "main.h"

/**
 * print_alphabet - prints out alphabets in lowercase followed by new line
 *
 * Return void
 */

void print_alphabet(void)

{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)

		_putchar(letter);

	_putchar('\n');
}
