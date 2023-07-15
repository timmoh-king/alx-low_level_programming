#include "search_algos.h"

/**
 * interpolation_search - searches for a value in a sorted array of integers
 * using jump search algotithm
 * @array: pointer to the foirst element of the array to search in
 * @size: the number of elements in the array
 * @value: the value to search for
 *
 * Return: if value is not in array return NULL ior -1
 */
int interpolation_search(int *array, size_t size, int value)
{
	size_t lo;
	size_t hi = size - 1;
	int pos;

	if (array == NULL)
		return (-1);

	while (lo <= hi && value >= array[lo] && value <= array[hi])
	{
		if (lo == hi)
		{
			if (array[lo] == value)
				return (lo);
			return (-1);
		}
		pos = lo + (
				((double)(hi - lo) / (array[hi] - array[lo])) * (
				value - array[lo]));

		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			lo = pos + 1;
		else
			hi = pos - 1;
	}
	return (-1);
}
