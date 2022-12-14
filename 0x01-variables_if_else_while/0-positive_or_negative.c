#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - State whether a number is positive, zero or negative
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive\n");
	} else if (n == 0)
	{
		printf("is zero\n");
	} else if (n < 0)
	{
		printf("is negative\n");
	}
	return (0);
}
