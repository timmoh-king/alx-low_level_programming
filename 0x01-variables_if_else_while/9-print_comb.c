#include <stdio.h>

/**
 * main - Write a program that prints all possible combinations
 * of single-digit numbers separated by ,followed by a space
 * Numbers should be printed in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		putchar((num % 10) + '0');
		if (num == 9)
			continue;

		putchar(',');
		putchar(' ');
	}

	return (0);
}
