#include <stdio.h>

/**
 * main - Prints all numbers of base 16 in lowercase followed by new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num;

	char letter;

	for (num = 0; num <= 9; num++)
		putchar((num % 10) + '0');

	letter = 'a';

	for (; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
