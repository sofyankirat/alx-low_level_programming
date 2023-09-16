#include "main.h"

/**
 * jack_bauer - prints every minute of the day of Jack Bauer.
 * void
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void jack_bauer(void)
{
	for (int i = 0; i <= 2; i++)
	{
		_putchar('0' + i);
		for (int j = 0; j <= 9; j++)
		{
			_putchar('0' + j);
			_putchar(':');
			for (int k = 0; k <= 5; k++)
			{
				if (k != 0)
				{
					_putchar('0' + i);
					_putchar('0' + j);
					_putchar(':');
				}
				_putchar('0' + k);
				for (int l = 0 ; l <= 9; l++)
				{
					_putchar('0' + l);
					_putchar('\n');
					if (k == 5 && l == 9)
					{
						break;
					}
					if (l != 9)
					{
						_putchar('0' + i);
						_putchar('0' + j);
						_putchar(':');
						_putchar('0' + k);
					}
				}
			}
			if (i == 2 && j == 3)
			{
				break;
			}
			if (j != 9)
			{
				_putchar('0' + i);
			}
		}
	}
}
