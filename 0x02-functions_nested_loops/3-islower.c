#include "main.h"

/**
 * _islower - checks for lowercase character.
 * @c: The integer to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _islower(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (0);
	}
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
}
