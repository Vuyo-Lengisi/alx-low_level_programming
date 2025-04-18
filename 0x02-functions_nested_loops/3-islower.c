#include "main.h"

/**
 * _islower - checks if the lowercase character is true.
 *
 * @c: is not a void function.
 *
 * Return: returns 1 when the statement is true, else returns 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
