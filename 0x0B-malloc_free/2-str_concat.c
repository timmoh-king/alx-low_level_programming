#include <string.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 *
 * Return:Memory to the concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	int len3 = (len1 + len2 + 1);
	int i;
	char *temp;

	if (s1 == NULL || s2 == NULL)
	{
		s1 = "";
		s2 = "";
	}

	temp = malloc(len3 * sizeof(char));

	if (temp == NULL)
		return (0);

	for (i = 0; i < len1; i++)
	{
		temp[i] = s1[i];

		for (i = 0; i < len3; i++)
		{
			temp[i + len1] = s2[i];
		}
	}

	temp[i] = '\0';
	return (temp);
}
#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * main - check the code for ALX School students.
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	    char *s;

	        s = str_concat("Betty ", "Holberton");
		    if (s == NULL)
			        {
					        printf("failed\n");
						        return (1);
							    }
		        printf("%s\n", s);
			    free(s);
			        return (0);
}
