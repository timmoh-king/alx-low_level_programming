#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strspn - return function
 * @s: the string to be checked
 * @accept: the string to be checked
 *
 * Return: the string values
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
