#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: the character to be checked
 *
 * Return: 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
