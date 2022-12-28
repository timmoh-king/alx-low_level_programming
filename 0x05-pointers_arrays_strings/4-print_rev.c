#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: The character to be checked
 *
 */
void print_rev(char *s)
{
	if (s)
	{
		while (*s)
			_putchar(*s--);
		_putchar('\n');
	}
}
