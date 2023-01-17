#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - write a function that allocates memory using malloc
 * @b: the integer value to be assigned
 *
 * Return: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}

	return (ptr);
}
