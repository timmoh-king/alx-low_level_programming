#include "main.h"
#include <stdlib.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: the number of members to be allocated
 * @size: the data type of memory
 *
 * Return: allocated memory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int **ptr;

	if (nmemb == 0)
		return (NULL);

	ptr = malloc(sizeof(size) * nmemb);

	if (ptr == NULL)
		return (NULL);

	return (ptr);
}
