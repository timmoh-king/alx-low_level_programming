 #include <stdio.h>

/**
 * main - a program that prints all combinations of three digits
 * The three digits must be different
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1, num_2, num_3;

	for (num_1 = 0; num_1 < 9; num_1++)
	{
		for (num_2 = num_1 + 1; num_2 < 10; num_2++)
		{
			for (num_3 = num_2 + 1; num_3 < 10; num_3++)
			{
				putchar(num_1 % 10 + '0');
				putchar(num_2 % 10 + '0');
				putchar(num_3 % 10 + '0');

				if (num_1 == 7 && num_2 == 8
						&& num_3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
