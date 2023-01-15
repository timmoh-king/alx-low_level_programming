#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return:Memory to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = (len1 + len2 + 1);
	int i, j;
	char *temp;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	temp = malloc(len3 * sizeof(char));

	if (temp == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		temp[i] = s1[i];
	}

	for (j = 0; j < len3; j++, i++)
	{
		temp[i] = s2[j];
	}

	return (temp);
}
