#include "main.h"

/**
 * print_sign - Prints sign of a number
 * @n: number whose sign will be printed
 *
 * Return: 1 and prints + if n is greater than zero,
 * 0 and prints 0 if n is zero,
 * 1 and prints - if n is less than zero
 */

int print_sign(int n)
{
	int value;

	if (n > 0)
	{
		_putchar('+');
		value = 1;
	}

	else if (n == 0)
	{
		_putchar('0');
		value = 0;
	}

	else
	{
		_putchar('-');
		value = -1;
	}

	return (value);
}
