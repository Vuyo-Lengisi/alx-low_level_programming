#include "main.h"

/**
 * _abs - Checks if the number is the absolute value.
 *
 * @pos: the char value checked.
 *
 * Return: Always returns positive value.
 */

int _abs(int pos)
{
	if (pos >= 0)
	{
		return (pos);
	}
	else
	{
		pos = pos * -1;
		return (pos);
	}
}
