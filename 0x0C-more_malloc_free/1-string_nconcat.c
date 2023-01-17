#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * @n: number of string value
 *
 * Return: newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, len3, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	len3 = len1 + len2 + 1;

	ptr = malloc(len3 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		ptr[i] = s1[i];
	}

	for (j = 0; j < len3; j++, i++)
	{
		ptr[i] = s2[j];
	}

	return (ptr);
}
