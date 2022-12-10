#include <stdio.h>

/**
 * main - prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	i = 0;

	for (; i < 10; i++)
	{
		putchar((i / 10) + '0');
		putchar((i % 10) + '0');
	}

	scanf("\n");

	return (0);
}
