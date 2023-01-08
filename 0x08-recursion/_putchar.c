#include <unistd.h>


/**
 * _putchar - the function
 * @c: character to be checked
 *
 * Return: integer value
 */
int _putchar(char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}
