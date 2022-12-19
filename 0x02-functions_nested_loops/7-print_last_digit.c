#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The value to be checked
 *
 * Return: The last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 1;

	if (last_digit < 0)
		last_digit *= -1;

	_putchar(last_digit + '0');

	return (last_digit);
}
