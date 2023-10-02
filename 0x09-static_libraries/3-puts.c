#include "main.h"

/**
 * _puts - prints a string, followed by a new line.
 * @str: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void _puts(char *str)
{
	while (*str != 0)
	{
		_putchar(*str);
		str++;
	}
	_putchar(10);
}
