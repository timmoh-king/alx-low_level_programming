#include <stdio.h>
#include "main.h"

/**
 * main - prints the numbers from 1 to 100
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	for (n > 0; n <= 100; n++)
	{
		if (n % 3 == 0)
		{
			printf("Fizz");
			_putchar(' ');
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
			_putchar(' ');
		}
		else if (n % 5 == 0 && n % 3 == 0)
		{
			printf("FizzBuzz");
			_putchar(' ');
		}
		else
			return (n);
	}

	_putchar('\n');
}
