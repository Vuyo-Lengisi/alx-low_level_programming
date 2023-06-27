#include "main.h"
/**
 * Write a function that swaps the values of two integers.
 * @a: swap int
 * @b: swap int
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
