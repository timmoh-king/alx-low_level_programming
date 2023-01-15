#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: the column size
 * @height: the row size
 *
 * Return:  a pointer to a 2 dimensional array of integers
 */
int **alloc_grid(int width, int height)
{
	int i;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(height * sizeof(int *));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(width * sizeof(int));

		if (ptr[i] == NULL)
		{
			for (; i >= 0;  i--)
				free(ptr[i]);

			free(ptr);
			return (NULL);
		}
	}

	return (ptr);
}
