#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function that prints a name
 * @name: the name to be passed in the function
 * @f: a reference to function f that returns void
 * the function f takes in a character pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
