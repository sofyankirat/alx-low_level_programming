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
	int i = 0;

	while (i <= 2)
	{
		int j = 0;

		_putchar('0' + i);
		while (j <= 9)
		{
			int k = 0;

			_putchar('0' + j);
			_putchar(':');
			while (k <= 5)
			{
				int l = 0;

				if (k != 0)
				{_putchar('0' + i);
				_putchar('0' + j);
				_putchar(':'); }
				_putchar('0' + k);
				while (l <= 9)
				{_putchar('0' + l);
				_putchar('\n');
				if (k == 5 && l == 9)
					break;
				if (l != 9)
				{_putchar('0' + i);
				_putchar('0' + j);
				_putchar(':');
				_putchar('0' + k); }
				l++; }
				k++; }
			if (i == 2 && j == 3)
				break;
			if (j != 9)
			{_putchar('0' + i) ; }
			j++; }
		i++; }
}
