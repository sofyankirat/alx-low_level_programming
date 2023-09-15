#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowercase, followed by a new line.
 * void
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet(void)
{
	int c = 97;

	while (c <= 122)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
