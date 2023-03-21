#include "main.h"

/**
 * _puts - prints a string, followed by a new line
 * @str: The character to br checked
 *
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	if (str)
	{
		while (*str)
			_putchar(*str++);

		_putchar('\n');
	}
}
