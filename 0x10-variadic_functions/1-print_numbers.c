#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: the number of integers passed to the function
 * @...: the numbers and values to be keyed in
 *
 * Return: the values entered
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));

		if (i != n - 1  && separator != NULL)
			printf("%s", separator);
	}

	va_end(list);

	printf("\n");
}
