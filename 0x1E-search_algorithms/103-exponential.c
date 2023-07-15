#include "search_algos.h"

/**
 * exponential_search - searches for a value in a sorted array of integers
 * using jump search algorithm
 * @array: pointer to the foirst element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if value is not in array return NULL ior -1
 */

int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;
	size_t l = 0;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (i < (r - l))
	{
		if (array[i] < value)
			i = i * 2;
		else
			return (-1);
	}

	return (binary_search(array, MIN(i, r), value));
}
