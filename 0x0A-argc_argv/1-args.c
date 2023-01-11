#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments passed
 * @argv: arguments passed in the compiler
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
