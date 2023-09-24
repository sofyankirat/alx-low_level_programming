#include "main.h"

/**
 * puts2 - prints every other character of a string.
 * @str: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
void puts2(char *str)
{
	int i = 0;
	int j = 1;

	_putchar(str[0]);
	while (str[i] != '\0')
	{
		i++;
	}
	i--;
	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[j]);
		}
		i--;
		j++;
	}
	_putchar(10);
}

