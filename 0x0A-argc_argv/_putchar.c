#include <unistd.h>

/**
 * _putchar - the function that prints
 * @c: the character to be checked
 *
 * Return: the character to be printed
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
