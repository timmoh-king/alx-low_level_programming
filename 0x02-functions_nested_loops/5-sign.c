#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: The character to be checked
 *
 * Return: 1, 0 or -1 for value n
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		putchar('-');
		return (-1);
	}
}
