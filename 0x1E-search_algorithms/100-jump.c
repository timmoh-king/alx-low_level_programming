#include "search_algos.h"

/**
 * jump_search - searches for a value in a sorted array of integers using
 * jump search algotithm
 * @array: pointer to the foirst element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if value is not in array return NULL ior -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t k = sqrt(size);
	size_t j = 0, i;

	if (array == NULL)
		return (-1);

	printf("Value checked array[%d] = [%lu]\n", array[j], j);
	while (array[k] <= value && k < size)
	{
		j = k;
		k = k + sqrt(size);
		printf("Value checked array[%d] = [%lu]\n", array[j], j);

		if (k > size - 1)
			k = size;
	}
	printf("Value found between indexes [%d] and [%d]\n", array[j], array[k]);
	for (i = j; i < k; i++)
	{
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
