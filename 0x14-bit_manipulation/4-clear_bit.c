#include "main.h"
#include <stdio.h>

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: a pointer to the number to be checked
 * @index: the position of the character needed
 *
 * Return: 1 on success -1 fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
