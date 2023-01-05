#include "main.h"

/**
 * _strchr - a function that locates a character in a string
 * @s: the string to be checked
 * @c: the character to be checked
 *
 * Return: pointer to the first occurrence of the character c
 */
char *_strchr(char *s, char c)
{
	for (; *s; s++)
	{
		if (*s == c)
			return (s);
	}
	return (*s == c ? s : NULL);
}
