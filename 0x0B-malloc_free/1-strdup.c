#include <stdlib.h>
#include "main.h"

/**
 * _strdup - function that returns pointer to newly allocated space in memory
 * which contains a copy of the string given as a parameter
 * @str: the string value to be copied
 *
 * Return: a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	int i;
	char *ptr;
	int size = 1;

	if (str == NULL)
		return (NULL);

	while (str[size])
	{
		size++;
	}

	ptr = malloc(size * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		ptr[i] = str[i];

	ptr[i] = '\0';
	return (ptr);
}
