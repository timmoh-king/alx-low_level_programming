#include "main.h"
#include <stdio.h>

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the digit number to be checked
 * @index: the position of the character needed
 *
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int b;

	if (n == '\0')
		return (-1);

	b = n >> index;

	return (b & 1);
}
