#include "main.h"

/**
 * times_table - Prints the 9 times table, starting with 0.
 */
void times_table(void)
{
	int i = 0, j, k;

	while (i <= 9)
	{
		_putchar('0');
		j = 1;

		while (j <= 9)
		{
			_putchar(',');
			_putchar(' ');

			k = i * j;

			if (k <= 9)
				_putchar(' ');
			else
				_putchar((k / 10) + '0');

			_putchar((k % 10) + '0');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
