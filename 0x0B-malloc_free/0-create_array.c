#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it
 * @size: the size of characters to be entered
 * @c: the character entered
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *ptr;

	ptr = malloc(sizeof(char) * size);

	if (size == 0 || ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = c;

	return (ptr);
}
