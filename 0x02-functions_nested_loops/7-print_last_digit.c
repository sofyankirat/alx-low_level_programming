#include "main.h"

/**
 * print_last_digit - prints the last digit of a number.
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int print_last_digit(int n)
{
	if (n >= 0)
	{
		int i = n % 10;

		_putchar ('0' + i);
		return (i);
	}
	else if (n < 0)
	{
		int i = n % 10;

		return (i);
	}
	return (0);
}
