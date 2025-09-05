#include "main.h"
/**
 * _strlen - Write a function that returns the length of a string.
 * @s: returns a value of a pointer
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int string_len = 0;

	while (*s != '\0')
	{
		string_len++;
		s++;
	}
	return (string_len);
}
