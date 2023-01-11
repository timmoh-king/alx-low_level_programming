#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the multiplication of two numbers
 * @argc: number of arguments passed
 * @argv: arguments passed
 *
 * Return: multiple of the two numbers
 */
int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
