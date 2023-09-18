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
	if (n <= 15 && n > 0)
	{
		for (int i = 0; i <= n; i++)
		{
			for (int j = 0; j <= n; j++)
			{int product = i * j;

			if (product < 10)
			{_putchar('0' + product);
			if (j != n)
				_putchar(',');
			if (i * (j + 1) < 10)
			{_putchar(' ');
				_putchar(' ');
				_putchar(' '); }
			else if (i * (j + 1) >= 10)
			{_putchar(' ');
				_putchar(' '); } }
			else if (product >= 10 && product <= 99)
			{_putchar('0' + product / 10);
				_putchar('0' + product % 10);
			if (j != n)
				_putchar(',');
			if (i * (j + 1) < 100)
			{_putchar(' ');
				_putchar(' '); }
			else if (i * (j + 1) >= 100)
			{_putchar(' '); } }
			else
			{_putchar('0' + product / 100);
				_putchar('0' + (product / 10) % 10);
				_putchar('0' + product % 10);
			if (j != n)
				_putchar(',');
				_putchar(' '); }
			if (j == n)
			{_putchar('\n'); } } } } }
