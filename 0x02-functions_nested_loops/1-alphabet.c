#include "main.h"

/**
 * print_alphabet - prints the alphabet in lowercase
 *
 * Return: void
*/
void print_alphabet(void)
{
	/*Declare the character*/
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	/*Declare a new line*/
	_putchar('\n');
}
