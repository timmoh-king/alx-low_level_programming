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

	for (hr = 0; hr <= 24; hr++)
	{
		for (min = 0; min <= 60; min++)
		{
			_putchar("%d:%d", hr, min);
		}
	}
}
