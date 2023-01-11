#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strpbrk - return the string values
 * @s: the string array
 * @accept: the string array
 *
 * Return: the string values
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
