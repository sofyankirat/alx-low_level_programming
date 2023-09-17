#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0.
 * void
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
	for (int j = 0; j <= 9; j++)
	{
		int product = i * j;

		if (product >= 10)
		{
			_putchar('0' + product / 10);
			_putchar('0' + product % 10);
		}
		else
		{
			_putchar('0' + product);
		}
		if (j != 9)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
		}
	}
		_putchar('\n');
	}
}
