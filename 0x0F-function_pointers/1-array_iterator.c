#include "function_pointers.h"

/**
 * array_iterator - function given as a parameter on each element of an array
 * @array: array to be passed
 * @size: the size of array
 * @action: the passed function that returns void
 * action it takes integer as a parameter
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
