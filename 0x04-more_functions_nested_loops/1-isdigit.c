#include "main.h"

/**
 * _isdigit - A function that checks for digits
 * @c: character that is being checked
 *
 * Return: 1 if  c is a digit, otherwise return 0.
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
