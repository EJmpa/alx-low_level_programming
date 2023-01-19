#include "variadic_functions.h"
/**
 * print_strings - print strings.
(* a blank line
 *@separator: the number of parameters
 *@n: the number of strings
* Description: this function prints all the parameters)?
(* section header: the header of this function is variadic_functions.h)*
* Return: no retunr.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *string;

	va_list strings;

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(strings, char*);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strings);
}
