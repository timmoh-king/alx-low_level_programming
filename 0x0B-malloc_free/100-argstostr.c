#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: number of arguments
 * @av: the arguments in the compiler
 *
 * Return: pointer to the concatenated string
 */
char *argstostr(int ac, char **av)
{
	int i, j, len;
	char *ptr;

	if (ac == 0)
		return (NULL);

	if (av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < ac; j++)
		{
			len += av[i][j];
		}
	}

	ptr = malloc((len + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		strcat(ptr, av[i]);
		strcat(ptr, "\n");
	}

	return (ptr);
}
