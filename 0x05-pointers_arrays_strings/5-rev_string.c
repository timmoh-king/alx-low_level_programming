#include "main.h"

/**
 * rev_string - a function that reverses a string
 * @s: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void rev_string(char *s)
{
	char *t = s;

	if (s)
	{
		while (*t)
			++t;

		while (s < --t)
		{
			*s ^= *t;
			*t ^= *s;
			*s ^= *t;
			++s;
		}
	}
}
