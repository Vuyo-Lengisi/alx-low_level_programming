#include "main.h"
/**
 * Write a function that returns the length of a string.
 * Return: len
 */
int _strlen(char *s)
{
	int string_len = 0;

	while(*s != '\0')
	{
		string_len++;
		s++;
	}
	return (string_len);
}			
