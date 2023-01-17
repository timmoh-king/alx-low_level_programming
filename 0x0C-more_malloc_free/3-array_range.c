#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 * @min: the lowest limit for the array
 * @max: the highest level of the array
 *
 * Return: the pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int i;
	int *ptr;
	int len = (max - min + 1);

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * len);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		ptr[i] = min;
		min++;
	}

	return (ptr);
}
