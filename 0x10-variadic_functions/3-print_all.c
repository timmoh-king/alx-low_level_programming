#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: argument types
 *
 * Return: keyed in values
 */
void print_all(const char * const format, ...)
{
	int j = 0;
	int len = strlen(format);
	char *string;
	va_list list;

	va_start(list, format);
	while (format[j] != '\0')
	{
		if (j < len && j > 0 && (format[j] == 'i' || format[j] == 'c'
					|| format[j] == 'f' || format[j] == 's'))
			printf(", ");
		switch (format[j])
		{
			case ('c'):
				printf("%c", va_arg(list, int));
				break;
			case ('i'):
				printf("%d", va_arg(list, int));
				break;
			case ('f'):
				printf("%f", va_arg(list, double));
				break;
			case ('s'):
				string = va_arg(list, char *);
				if (string == NULL)
				{
					printf("(nil)");
				break;
				}
				printf("%s", string);
				break;
		} j++;
	}
	va_end(list);
	printf("\n");
}
