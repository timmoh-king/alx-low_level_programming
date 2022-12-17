#include "main.h"

/**
<<<<<<< HEAD
 * print_alphabet - prints 10 times the alphabet
=======
 * print_alphabet_x10 - prints 10 times the alphabet
>>>>>>> 31fe78aaf5583fc3c54a3e5604f07af4771b6c0c
 * in lowercase followed by a new line
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	char c;

	while (i < 10)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}

		_putchar('\n');

		i++;
	}
}
