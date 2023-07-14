#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for in the array
 *
 * Return: the first index where value is located
*/

int binary_search(int *array, size_t size, int value)
{
	int mid;
	size_t l = 0, i;
	size_t r = size - 1;

	if (array == NULL)
		return (-1);

	while (l <= r)
	{
		printf("searching in array:");
		for (i = l; i < r; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[r]);

		mid = ceil(l + (r - l) / 2);

		if (array[mid] == value)
			return (mid);
		if (array[mid] <  value)
			l = mid + 1;
		else
			r = mid - 1;
	}
	return (-1);
}
