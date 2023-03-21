#include "main.h"

/**
 * _strlen -  returns the length of a string
 * @s: The character to be checked
 *
 * Return: The integer value
 */
int _strlen(char *s)
{
	int len = 0;

	if (s)
	{
		while (*(s + len))
		{
			++len;
		}

	}

	return (len);
}
