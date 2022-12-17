#include "main.h"

/**
 * main - Write a function that prints the alphabet
 * in lowercase, followed by a new line
 *
 * Return: Newline
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
