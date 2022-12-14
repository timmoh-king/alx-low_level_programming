#include <stdio.h>

/**
 * main - Write a program that prints the lowercase alphabet
 * in reverse and followed by a new line
 *
 * Return: Always 0 (sucess)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower < 'z'; lower++)
		putchar(reverse(lower));

	putchar('\n');

	return (0);
}
