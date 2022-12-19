#include "main.h"

/**
 * jack_bauer - print every minute of the day from 00:00 to 23:59
 *
 *
 * Return: void
 */
void jack_bauer(void)
{
	int hr;
	int min;

	for (hr = 0; hr <= 23; hr++)
	{
		for (min = 0; min <= 59; min++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
