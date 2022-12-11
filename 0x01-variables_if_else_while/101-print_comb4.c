#include <stdio.h>

/**
 * main - Prints all possible different combinations of three digits,
 * in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit_1, digit_2, digit_3;


	for (digit_1 = 0; digit_1 <= 7; digit_1++)
	{
		for (digit_2 = digit_1 + 1; digit_2 <= 8; digit_2++)
		{
			for (digit_3 = digit_1 + 2; digit_3 <= 9; digit_3++)
			{
				putchar((digit_1 % 10) + '0');

				putchar((digit_2 % 10) + '0');

				putchar((digit_3 % 10) + '0');

				if (digit_1 == 7 && digit_2 == 8 && digit_3 == 9)

					continue;

				putchar(',');

				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
