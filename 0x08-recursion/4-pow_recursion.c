#include "main.h"

/**
 * _pow_recursion - the value of x raised to the power of y
 * @x: the base character
 * @y: the power character
 *
 * Return: integer value
 */
int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
		return (-1);

	else if (y == 0)
		return (1);

	result *= _pow_recursion(x, y - 1);

	return (result);
}
