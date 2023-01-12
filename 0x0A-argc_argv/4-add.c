#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that adds positive numbers
 * @argc: the number of arguments passed
 * @argv: arguments passed in th compiler
 *
 * Return: sum of positive numbers
 */
int main(int argc, char *argv[])
{
	int num, i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (num = 0; argv[i][num]; num++)
		{
			if (argv[i][num] < '0' || argv[i][num] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}

		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}
