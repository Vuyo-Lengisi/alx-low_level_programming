#include<stdio.h>
#include "main.h"
/**
 * main - print_aphabet
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
