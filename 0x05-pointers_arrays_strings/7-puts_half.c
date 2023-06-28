#include "main.h"
/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: input
 * Return: half of input
 */
void puts_half(char *str)
{
        int a, n, string_half;

        string_half = 0;

        for (a = 0; str[a] != '\0'; a++)
                string_half++;


        n = (string_half / 2);


        if ((string_half % 2) == 1)
                n = ((string_half + 1) / 2);


        for (a = n; str[a] != '\0'; a++)
                _putchar(str[a]);
        _putchar('\n');
}
