#include "main.h"

/**
 * jack_bauer - show a day in a life of Jack from 00:00 to 23:59
 */

void jack_bauer(void)
{
	int hrs, min;

	hrs = 0;

	while (hrs < 24)
	{
		min = 0;

		while (min < 60)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');

			min++;
		}
		hrs++;
	}
}
