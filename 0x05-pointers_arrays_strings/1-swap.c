#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: The character to be checked
 * @b: The character to be checked
 *
 * Return: Always 0 (Sucess)
 */
void swap_int(int *a, int *b)
{
	*a = &b;
	*b = &a;
}
