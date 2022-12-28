#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: The character to be checked
 *
 */
void print_rev(char *s)
{
	if (str)
	{
		while (*str)
			_putchar(*str--);
		_putchar('\n');
	}
}
