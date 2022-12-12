#include <unistd.h>

/**
 * main - C program that program that prints out a string
 *
 * Return: Program return 1 (Success)
 */
int main(void)
{
	write(STDOUT_FILENO, "and that piece of art is useful
			\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
