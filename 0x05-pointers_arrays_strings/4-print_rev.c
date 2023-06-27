#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: string
 * return: 0
 */
void print_rev(char *s)
{
        int string_print = 0;
        int o;

        while (*s != '\0')
        {
                string_print++;
                s++;
        }
        s--;
        for (o = string_print; o > 0; o--)
        {
                _putchar(*s);
                s--;
        }
        _putchar('\n');
}
