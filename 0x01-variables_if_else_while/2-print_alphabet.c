#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char letter;

	letter = 'a';

	for (; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
