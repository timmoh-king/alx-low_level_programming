#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _memcpy - evaluate memcopy
 * @dest: the string array
 * @src: the string array
 * @n: the integer character
 *
 * Return: memcopy
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	return (memcpy(dest, src, n));
}
