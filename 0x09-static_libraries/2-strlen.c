#include "main.h"

/**
 * _strlen - returns the length of a string.
 * @s: The char to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately
 */
int _strlen(char *s)
{
	int n_of_c = 0;

	while (*s != 0)
	{
		n_of_c += sizeof(*s);
		s++;
	}
	return (n_of_c);
}
