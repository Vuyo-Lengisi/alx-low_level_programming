#include "main.h"

/**
 * print_last_digit - Prints the last digit of the number.
 *
 * @digi: Value that will be printed.
 *
 * Return: Returns the digit that has been requested.
 */

int print_last_digit(int digi)
{
	int abs_val = digi % 10;

	if (abs_val < 0)
	{
		abs_val =  abs_val * -1;
	}
	_putchar(abs_val + '0');
	return (abs_val);
}
