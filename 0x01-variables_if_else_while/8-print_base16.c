#include <stdio.h>

/**
 * main - Write a program that prints all the numbers of
 * base 16 in lowercase followed by a new line
 *
 * Return: Success 0 (Always)
 */
int main(void)
{
	int base_16;
	char letter;

	for (base_16 = 0; base_16 < 16; base_16++)
		putchar((base_16 % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
