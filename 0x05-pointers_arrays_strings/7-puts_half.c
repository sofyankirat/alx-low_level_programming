#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line.
 * @str: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void puts_half(char *str)
{
	int inc = 0, i  = 0, j = 0, r, n;

	while (str[inc] != '\0')
	{
		inc++;
	}
	while (inc % 2 == 0 && str[i] != '\0')
	{
		r = inc / 2;
		i++;
		while (i >= r && str[i] != '\0')
		{
			_putchar(str[i]);
			i++;
		}
	}
	while (inc % 2 != 0 && str[j] != '\0')
	{
		n = (inc / 2) + 1;
		j++;
		while (j >= n && str[j] != '\0')
		{
			_putchar(str[j]);
			j++;
		}
	}
	_putchar(10);
}
