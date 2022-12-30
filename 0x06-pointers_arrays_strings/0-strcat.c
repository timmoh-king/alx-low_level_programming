#include "main.h"

/**
 * _strcat - concatenate two strings
 * @dest: the string to append to
 * @src: the string to append
 *
 * Return: a pointer to the destination string dest
 */
char *_strcat(char *dest, char *src)
{
	char *dest_end = dest;
	int src_len = 0;

	while (*dest_end)
		++dest_end;

	while (src[src_len])
		++src_len;

	if (src + src_len < dest || dest_end + src_len < src)
	{
		do {
			*dest_end++ = *src++;
		} while (src_len--);
	}
	return (dest);
}
