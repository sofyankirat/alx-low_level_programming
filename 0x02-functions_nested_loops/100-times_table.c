#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_times_table(int n)
{
	if (n <= 15 && n >= 0)
	{int i = 0;

		while (i <= n)
		{int j = 0;

			while (j <= n)
			{
			if (i * j < 10)
			{_putchar('0' + i * j);
			if (j != n)
				_putchar(',');
			if (i * (j + 1) < 10 && j != n)
			{_putchar(' ');
			_putchar(' ');
				_putchar(' '); }
			else if (i * (j + 1) >= 10 && j != n)
			{_putchar(' ');
				_putchar(' '); } }
			else if (i * j >= 10 && i * j <= 99)
			{_putchar('0' + (i * j) / 10);
				_putchar('0' + (i * j) % 10);
			if (j != n)
				_putchar(',');
			if (i * (j + 1) < 100 && j != n)
			{_putchar(' ');
				_putchar(' '); }
			else if (i * (j + 1) >= 100 && j != n)
			{_putchar(' '); } }
			else
			{_putchar('0' + (i * j) / 100);
				_putchar('0' + ((i * j) / 10) % 10);
				_putchar('0' + (i * j) % 10);
			if (j != n)
			{_putchar(',');
				_putchar(' '); } }
			if (j == n)
				_putchar('\n');
			j++; }
			i++; } } }
