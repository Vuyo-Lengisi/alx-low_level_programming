#include<unistd.h>

/*
 * main - prints text without using stdio header
 *
 * Return: 1 Always(Success)
 *
 */

int main(void)
{
	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);

	return (1);
}
