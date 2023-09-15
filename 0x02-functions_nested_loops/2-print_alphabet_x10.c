#include "main.h"

/**
 * print_alphabet_x10 - print 10 times the alphabet, in lowercase.
 * void
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int c = 97;

		while (c <= 122)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
