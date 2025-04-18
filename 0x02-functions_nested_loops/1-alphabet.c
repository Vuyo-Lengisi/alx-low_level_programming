#include<stdio.h>
#include "main.h"
/**
 * print_alphabet - print alphabets from 'a' to 'z' using _putchar function
 *
 * Return: Always 0.
 */
void print_alphabet(void)
{
		char alphabets;


		for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
			_putchar(alphabets);


		_putchar('\n');
}
