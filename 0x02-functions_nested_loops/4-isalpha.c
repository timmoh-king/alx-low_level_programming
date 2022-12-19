#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The character to be checked
 *
 * Return: Returns 1 if c is a letter, lowercase or uppercase else 0
 */
int _isalpha(int c)
{
	for (c = 'a'; c <= 'z'; c++)
	{
		for (c = 'A'; c <= 'Z'; c++)
		{
			return (1);
		}
	}

	return (0);
}
