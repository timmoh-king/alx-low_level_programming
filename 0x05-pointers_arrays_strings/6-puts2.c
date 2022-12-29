#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	if (str)
	{
		do {
			if (*str)
				_putchar(*str++);
		} while (*str++);
		_putchar('\n');
	}
}
