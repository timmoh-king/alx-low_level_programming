#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void puts_half(char *str)
{
	int len;

	if (str)
	{
		for (len = 0; *(str + len); ++len)
			;
		for (str += (len + 1) / 2; *str; ++str)
			_putchar(*str);
		_putchar('\n');
	}
}
