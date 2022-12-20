#include "main.h"

/**
 * print_diagonal - draw a diagonal line on the terminal
 * @n: The character to be checked
 *
 * Return: integer value
 */
void print_diagonal(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('\');
	}

	_putchar('\n');
}

