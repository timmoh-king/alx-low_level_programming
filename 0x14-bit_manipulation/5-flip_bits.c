#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to
 * flip to get from one number to another
 * @n: the first character
 * @m: the second character
 *
 * Return: number of bits you would need to flip to
 * get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i;
	int count = 0;

	i = n ^ m;

	for (; i > 0; i >>= 1)
	{
		if (i & 1)
			count++;
	}

	return (count);
}
