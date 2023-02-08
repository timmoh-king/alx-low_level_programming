#include "main.h"
#include <stdio.h>

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: a pointer to the number to be checked
 * @index: the position of the character needed
 *
 * Return: 1 on success or -1 on fail
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL)
		return (-1);

	*n ^= (1 << index);

	return (1);
}
