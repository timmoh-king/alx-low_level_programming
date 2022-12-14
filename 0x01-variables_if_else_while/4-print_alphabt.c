#include <stdio.h>

/**
 * main - Write a program that prints the alphabet in lowercase
 * followed by a new line
 * Print all the letters except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lower;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		if (lower != 'q' && lower != 'e')
			putchar(lower);
	}
	putchar('\n');

	return (0);
}
