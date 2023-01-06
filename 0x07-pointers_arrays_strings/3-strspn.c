#include "main.h"

/**
 * _strspn - a  function that gets the length of a prefix substring
 * @s: the string character
 * @accept: the character to be checked
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j;
	int c = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != 32)
		{
			for (j = 0; accept[j] != '\0'; j++)
			{
				if (s[i] == accept[j])
					c++;
			}
		}
		else
			return (c);

	}
	return (c);
}
#include "main.h"
#include <stdio.h>

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s = "hello, world";
	        char *f = "oleh";
		    unsigned int n;

		        n = _strspn(s, f);
			    printf("%u\n", n);
			        return (0);
}
