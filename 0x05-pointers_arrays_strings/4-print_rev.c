#include "main.h"

/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: The char to print
 *
 * Return: On success 1.
 * On error,-1 is returned, and errno is set appropriately.
 */
void print_rev(char *s)
{
	while (*s != 0 || *s == 0)
	{
		s++;
		while (*s == 0)
		{
			s--;
			while (*s != 0)
			{
				_putchar(*s);
				s--;
			}
			break;
		}
		if (*s == 0)
			break;
	}
	_putchar('\n');
}
