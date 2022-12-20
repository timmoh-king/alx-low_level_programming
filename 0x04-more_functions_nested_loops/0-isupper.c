#include "main.h"

/**
 * _isupper - checks for uppercase character
 * @c: character to be checked
 *
 * Return: 1 if uppercase and 0 otherwise
 */
int _isupper(int c)
{
	for (c = 'A'; c <= 'Z'; c++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			putchar("%d", c);
			putchar(':');
			putchar(' ');
			putchar('\n');

			return (0);
		}

		putchar("%d", c);
		putchar(':');
		putchar(' ');
		putchar('\n');

		return (1);
	}
}
