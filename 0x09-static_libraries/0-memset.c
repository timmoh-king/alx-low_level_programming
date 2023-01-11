#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memset - function memset
 * @s: the string
 * @b: the character to be checked
 * @n: integer character
 *
 * Return: memset
 */
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}
