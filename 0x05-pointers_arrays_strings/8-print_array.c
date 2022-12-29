#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n elements of an array of integers
 * @n: The character to be checked
 * @a: The character to be checked
 *
 * Return: Always 0 (Success)
 */
void print_array(int *a, int n)
{
	if (a)
	{
		while (n > 0)
		{
			printf("%d", *a++);
			if (--n)
				printf(", ");
		}
		putchar('\n');
	}
}
