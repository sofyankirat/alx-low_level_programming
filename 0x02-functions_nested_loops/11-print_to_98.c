#include "main.h"
#include <stdio.h>

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
		if (n >= 100)
		{_putchar('0' + (n / 100));
			_putchar('0' + ((n / 10) % 10));
			_putchar('0' + (n % 10)); }
		else
		{_putchar('0' + (n / 10));
			_putchar('0' + (n % 10)); }
			printf(", "); }
	for (; n < 98; n++)
	{
		if (n >= -99 && n <= -10 && n < 0)
		{_putchar('-');
			_putchar('0' + (n * -1) / 10);
			_putchar('0' + (n * -1) % 10);
			printf(", "); }
		else if (n < -99 && n <= -10 && n < 0)
		{_putchar('-');
			_putchar('0' + (n * -1) / 100);
			_putchar('0' + ((n * -1) / 10) % 10);
			_putchar('0' + (n * -1) % 10);
			printf(", "); }
		else if (n > -10 && n < 0)
		{_putchar('-');
			_putchar('0' + (n * -1));
			printf(", "); }
		if (n <= 9 && n >= 0)
		{_putchar('0' + n);
			_putchar(',');
			_putchar(' '); }
		if (n >= 10)
		{_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			printf(", "); } }
		if (n == 98)
		{_putchar('0' + n / 10);
			_putchar('0' + n % 10);
			_putchar('\n'); } }
