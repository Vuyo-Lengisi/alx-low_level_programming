#include "main.h"

/**
 * print_sign - Checks if the number is + or 0 or - and prints the sign.
 *
 * @n: The char to be checked.
 *
 * Return: Return + if number is positive, - if the number
 * is negative and 0 if the number is 0.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar(45);
		return (-1);
	}
}
