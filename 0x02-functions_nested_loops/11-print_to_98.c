#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all natural numbers from n to 98.
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void print_to_98(int n)
{
	for (; n > 98; n--)
	{
		printf("%i", n);
		printf(", ");
	}
	for (; n < 98; n++)
	{
		printf("%i", n);
		printf(", ");
	}
	if (n == 98)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
		_putchar('\n');
	}
}
