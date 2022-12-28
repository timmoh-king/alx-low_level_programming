#include "main.h"

/**
 * print_rev - print string in reverse
 * @s: The character to be checked
 *
 */
void print_rev(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;
		while (s < t--)
			_putchar(*t);
		_putchar('\n');
	}
}
