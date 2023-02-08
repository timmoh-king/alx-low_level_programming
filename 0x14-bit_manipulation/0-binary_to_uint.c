#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: pointing to a string of binary chars
 *
 * Return: the unsigned int or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int num = 0;

	if (b == NULL)
		return (0);

	while (b[i])
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		num = num * 2 + (b[i++] - '0');
	}

	return (num);
}
