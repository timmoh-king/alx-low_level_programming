#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_string - print strings followed by a new line
 * @separator: the string to be printed between strings
 * @n: the number of characters passed
 * @...: the arguments
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;
	char *string;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(list, char *);

		if (string == NULL)
			printf("%s", "(nil)");
		else
			printf("%s", string);

		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
