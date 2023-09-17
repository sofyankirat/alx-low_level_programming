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
	int i = 0;

	while (i <= 9)
	{
		int j = 0;

		while (j <= 9)
		{
			int product = i * j;

			if (product >= 10)
			{
				_putchar('0' + product / 10);
				_putchar('0' + product % 10);
				if (j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar('0' + product);
				if (j != 9 && i * (j + 1) < 10)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
				if (j != 9 && i * (j + 1) >= 10)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
