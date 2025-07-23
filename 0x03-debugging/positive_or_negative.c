#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * positive_or_negative - Checks to see if the value is + or -
 *
 * i: it must return a value
 *
 * Return: Always 0(Success)
 */

void positive_or_negative(int i)
{
	if (i > 0)
		printf("%d is positive\n", i);
	else if (i == 0)
		printf("%d is zero\n", i);
	else
		printf("%d is negative\n", i);
}
