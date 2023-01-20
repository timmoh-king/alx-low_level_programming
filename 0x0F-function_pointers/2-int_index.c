#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: the list of values to be checked
 * @size: number of elements in the array
 * @cmp: pointer to the function that returns an int
 * the function takes in an integer value
 *
 * Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);
				i++;
			}
		}
	}

	return (-1);
}
